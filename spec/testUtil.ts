import { resolve, join } from 'path'
import { existsSync } from 'fs'

export function sleep(ms: number) {
  return new Promise(resolve => setTimeout(resolve, ms))
}

export function resolveOrThrow(f: string, relativeTo?: string) {
  const p = resolve(relativeTo ? join(relativeTo, f) : f)
  if (!existsSync(p)) {
    throw new Error('Expected file ' + f + ' to exist relative to ' + relativeTo || process.cwd())
  }
  return p
}

export function expectToExist(f: string, relativeTo?: string) {
  try {
    return resolveOrThrow(f, relativeTo)
  } catch (error) {
    fail(`expected file "${f}" tp exists ${relativeTo ? `relative to folder "${relativeTo}"` : ''}`)
  }
}
export async function executeApp(fn: () => Promise<any>, expectToFailPredicate?: (error: Error) => boolean) {
  try {
    await fn()
  } catch (error) {
    console.error(error, error.stack);
    if (expectToFailPredicate) {
      if (!expectToFailPredicate(error)) {
      }
    } else {
      process.exit(1)
    }
  }
}