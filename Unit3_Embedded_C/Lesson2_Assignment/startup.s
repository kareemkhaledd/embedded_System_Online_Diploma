.global reset
reset:
		LDR sp,=stack_top
		BL main
stop:   B stop