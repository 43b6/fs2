inherit ROOM;

void create()
{
	set("short","��կ ���㰵��");
	set("long",@LONG
�����ҳ�ʪ���������������կ����ӳ�����ﲻ���Ҳ����
�ˣ�����ͨ����կǰ��������Ϣ����
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":2,
__DIR__"npc/poison_soldier":2,
]));
	set("exits",([
"up":__DIR__"r-64",
"south":__DIR__"r-14",
]));
	setup();
}

int valid_leave(object me,string dir)
{
	if( present("snake-soldier",environment(me)) )
	{
		message_vision("������ȣ��ֵ��ǡ�����"+me->name(1)+"���ˡ�\n",me);
		return notify_fail("�����·�Ѿ�����ס�ˡ�\n");
	}
	if( dir == "south" )
		message_vision("$Nһ��С�ģ����˳�ȥ��\n",me);
return 1;
}