// /u/j/judd/room/r10.c
inherit ROOM;

void create ()
{
set("short", "��֮ͨ��");
set("long", @LONG
����������ͼ��ݵĵ�·���൱�����ˣ����Ծ�Ȼ���ǻ��棬ֻ
���м���һ����ɫ��С��ͨ��ͼ��ݣ����Ӳ�����˺ܿ����ڴ˾ʹ�
���ù��ˣ���ʵ��ֻҪС�ĵ��ߣ��ǲ������˵ģ�����ͼ��ݣ�����
ǰ����
LONG
);
set("light_up", 1);
set("exits", ([ /* sizeof() == 2 */
 "southeast" : __DIR__"r13.c",
 "northwest" : __DIR__"fire.c",
]));
setup();
}
