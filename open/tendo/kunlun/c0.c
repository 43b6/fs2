inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
ټ�����ɫɽ�ȣ������ѩ���������ϻ���
һ�㱡����ѩ��������˻��ǳ��˲���ƽ���ѵ�
һ���Ļ��ݡ�ǰ����Ƭ���ص�����������������
��Ҳ����Դ�Խ(pass)������

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"east" : __DIR__"m1",
]));
	set("outdoors", "1");

	setup();
}

void init()
{
	add_action("do_pass","pass");
}

// modified by babe
int do_pass()
{
	object who = this_player();
	tell_room( this_object(), who->query("name")+ "��������ȥ��\n", who );
	who->move(__DIR__"c1");
	if( who->query("food") > 200 )
		who->add( "food", -10 );
	return 1;
}
