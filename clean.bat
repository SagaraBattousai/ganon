@echo OFF

echo Removing build ...
CMAKE -E rm -rf build
echo DONE

echo Removing dist ...
CMAKE -E rm -rf dist
echo DONE

echo Removing egg-info  ...
CMAKE -E rm -rf src/ganon.egg-info
echo DONE
