inherit ROOM;
void create ()
{
set("short", "��Ϣ��");
set("long",@LONG

������һ����������������䣬һƬ�յ����Ŀշ���
��ȫû���κζ����İ��裬�����������������������
Ϊ�˼���ϵͳ����������ϵͳ��������

LONG);
set("exits", ([
"north" : __DIR__"up49",
"down" : __DIR__"up48",
]));
set("no_fight",1);
set("objects",([
__DIR__"checkman":1,
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
setup();
}

void init()
{
object me=this_player();
me->start_busy(3);
}