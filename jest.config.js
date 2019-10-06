// For a detailed explanation regarding each configuration property, visit:
// https://jestjs.io/docs/en/configuration.html
module.exports = {
  clearMocks: true,
  coverageDirectory: "coverage",
  collectCoverageFrom: ["**/*.{js,jsx,ts,tsx}", "!**/node_modules/**"],
  forceCoverageMatch: ["**/*.{ts,tsx,js,jsx}", "!**/*.test.{ts,tsx,js,jsx}"],
  moduleFileExtensions: ["js", "json", "jsx", "ts", "tsx", "node"],
  roots: ["<rootDir>/src/lib"],
  testEnvironment: "node",
  transform: {
    "^.+\\.tsx?$": "ts-jest"
  },
  globalSetup: "./config/tests/setup.js",
  globalTeardown: "./config/tests/teardown.js"
};
