inherit ROOM;

void create()
{
	set("short","��կ �������");
	set("long",@LONG
ͨ���ϣ��������������Ķ��ߣ�������಻�ṥ���ˣ���ͨ��
��ȴ����������̾�����ʯ��ʯ���˶֮�������������ϵ�����
�����������Ŀ���������..�ƺ����������˼�������ʯ��..
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/snake_guard_1":1,
__DIR__"npc/snake_guard_2":1,
]));
	set("exits",([
"south":__DIR__"r-65",
"north":__DIR__"r-67",
]));
	setup();
}

int valid_leave(object me,string dir)
{
	if( present("snake-guard",environment(me)) )
	{
		message_vision("���ϴ�ȣ�"+me->name(1)+"�������ܡ�����վס��\n",me);
		return notify_fail("�����·�Ѿ�����ס�ˡ�\n");
	}
return 1;
}
