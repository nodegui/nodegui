export enum MatchFlag {
  MatchExactly = 0,
  MatchFixedString = 8,
  MatchContains = 1,
  MatchStartsWith = 2,
  MatchEndsWith = 3,
  MatchCaseSensitive = 16,
  MatchRegExp = 4,
  MatchWildcard = 5,
  MatchWrap = 32,
  MatchRecursive = 64
}
