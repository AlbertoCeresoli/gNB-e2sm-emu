#!/bin/bash

git submodule update --init
git submodule update --remote --merge
cd oai-oran-protolib
git checkout deliverable_neu
