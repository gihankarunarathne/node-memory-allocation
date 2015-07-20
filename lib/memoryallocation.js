'use strict';

var mem_alloc = require('bindings')('memoryallocation');

console.log(mem_alloc.getNewSpace("Memory Allocation"));
