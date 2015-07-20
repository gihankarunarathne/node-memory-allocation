{
  "targets": [
    {
      "target_name": "memoryallocation",
      "sources": [ "./src/memoryallocation.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}
