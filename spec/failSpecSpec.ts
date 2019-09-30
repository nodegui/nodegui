import { execSync } from 'child_process';
 
describe('spec failures', ()=>{

  it('a failing spec should exit code !== 0 and show expectation errors in stdout when its TS code is executed with ts-node', ()=>{
   try {
      const b =  execSync(`node_modules/.bin/qode  node_modules/ts-node/dist/bin node_modules/jasmine/bin/jasmine  spec/assets/specFailing.ts`)
      expect('Expected to fail').toBeUndefined()
    } catch (error) {
      expect(error.status).not.toBe(0)
      expect(error.stdout.toString()).toContain(`Expected 'An expected Failure at the end of the code' to be undefined`)
    }
  });

  it('a failing spec should exit with code different than zero and print assert failure msg in stdout', ()=>{
    expect(()=>  execSync(`npx tsc`)).not.toThrow()
    try {
      const b =  execSync(`node_modules/.bin/qode  node_modules/jasmine/bin/jasmine  dist/spec/assets/specFailing.js`)
      expect('Expected to fail').toBeUndefined()
    } catch (error) {
      expect(error.status).not.toBe(0)
      expect(error.stdout.toString()).toContain(`Expected 'An expected Failure at the end of the code' to be undefined`)
    }
  })
  
});
