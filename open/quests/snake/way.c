int valid_leave(object me,string dir)
{
	if( present("snake-soldier",environment(me)) )
	{
		message_vision("������ȣ��ֵ��ǡ�����"+me->name(1)+"���ˡ�\n",me);
		return notify_fail("�����·�Ѿ�����ס�ˡ�\n");
	}
return 1;
}