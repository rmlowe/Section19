.PHONY: clean All

All:
	@echo "----------Building project:[ CopyFile_2 - Debug ]----------"
	@cd "CopyFile_2" && "$(MAKE)" -f  "CopyFile_2.mk"
clean:
	@echo "----------Cleaning project:[ CopyFile_2 - Debug ]----------"
	@cd "CopyFile_2" && "$(MAKE)" -f  "CopyFile_2.mk" clean
