// Room: /open/tendo/room/t07.c

inherit ROOM;

void create()
{
	set("short", "�ع�֮��");
	set("long", @LONG
��ǽ������һ��ʮ�־޴��̫��ͼ��ʹ������Ĵų��ܵ��ı䣬
��ʹ���ع���ʱ��ɸ��ܵ�����������������������������ʧ����
��Ԫ�������гɣ�Ҳ���ǵ����˰��ɵľ��磬������֮ʱԪ��Ҳ����
�����������������׹��ڤ�磬��ڤ��֮��һֱ�Դ˵ػ���������
ʱҪ�ݻٴ˵ء�

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"t06",
]));
       set("objects",([
	"/open/tendo/npc/chinho" : 1,
       ]));
	set("light_up",1);
	setup();
}
