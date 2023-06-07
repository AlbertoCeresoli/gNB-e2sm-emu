#!/bin/bash

git submodule update --init
cd oai-oran-protolib
git pull
git checkout deliverable-neu
