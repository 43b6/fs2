int valid_leave(object me,string dir)
{
	if( present("snake-soldier",environment(me)) )
	{
		message_vision("守卫大喝：兄弟们～别让"+me->name(1)+"跑了～\n",me);
		return notify_fail("你的退路已经被挡住了。\n");
	}
return 1;
}