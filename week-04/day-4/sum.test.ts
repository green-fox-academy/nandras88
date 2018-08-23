'use strict';

import {test} from 'tape';
import {Sum} from './sum';

test('Testing Sum method', (t) => {
  let testSum = new Sum([1,2,3])
  const actual = testSum.sumAll();
  const expected = 6;
  t.equal( actual, expected, 'Sum method is working fine!!');
  t.end();
})

test('Testing Sum method', (t) => {
  let testSum = new Sum([])
  const actual = testSum.sumAll();
  const expected = 0;
  t.equal( actual, expected, 'Sum method is working fine!!');
  t.end();
})

test('Testing Sum method', (t) => {
  let testSum = new Sum([0])
  const actual = testSum.sumAll();
  const expected = 0;
  t.equal( actual, expected, 'Sum method is working fine!!');
  t.end();
})

test('Testing Sum method', (t) => {
  let testSum = new Sum(['a'])
  const actual = testSum.sumAll();
  const expected = '0a';
  t.equal( actual, expected, 'Sum method is working fine!!');
  t.end();
})