// /u/j/judd/room/r23.c
inherit ROOM;

void create ()
{
set("short", "ˮ֮ͨ��");
set("long", @LONG
ӳ�����еģ���һ����ˮ�أ���·��ˮ�ص���һͷ���������ƺ�
û��·���Թ�ȥ��ͻȻһ�������������㣬��ϸ�ļ�飬������ˮ��
���м���һ���ɱ�������С·����������������̵ģ�ֻ�ǲ�֪��
�᲻����ˮ�ص�һ����ѣ�
LONG
);
set("light_up", 1);
set("exits", ([ /* sizeof() == 2 */
 "southwest" : __DIR__"water.c",
 "northeast" : __DIR__"r19.c",
]));
setup();
}