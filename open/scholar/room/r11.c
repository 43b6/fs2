// /u/j/judd/room/r10.c
inherit ROOM;

void create ()
{
set("short", "��֮ͨ��");
set("long", @LONG
����ķ磬��֪��Ϊ�Σ�ǿ�ò����ˣ���˵�Ǵ粽���У�������
��ͣ�ĳ��ԣ����ڷ���ֻ�����м�Ĳ�����û�з�ģ�Ҳ����˵����
һ���޷��С·���Լ���ǰ�����治֪����������ô��Ƴ���ô����
�Ļ��صģ��߹�С·������ͼ��ݾ͵��ˣ�
LONG
);
set("light_up", 1);
set("exits", ([ /* sizeof() == 2 */
 "southwest" : __DIR__"r15.c",
 "northeast" : __DIR__"wind.c",
]));
setup();
}