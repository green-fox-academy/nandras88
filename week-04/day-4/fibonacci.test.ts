'use strict';

import { fibonacci } from './fibonacci';
import { test } from 'TAPE';

test('Fibonacci sequence working method with positive integer', (t) => {
  const actual = fibonacci(10);
  const expected = 89;
  t.equal(actual, expected, 'it has to be the same like expected');
  t.end();
})

test('Fibonacci sequence working mehtod with 0', (t) => {
  const actual = fibonacci(0);
  const expected = 1;
  t.equal(actual, expected, 'it must shows 1 about the IF statement');
  t.end();
})

test('Fibonacci sequence working mehtod with negative integer', (t) => {
  const actual = fibonacci(-10);
  const expected = 1;
  t.equal(actual, expected, 'it must shows 1 about the IF statement');
  t.end();
})
