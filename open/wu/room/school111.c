// Room: /u/d/devils/school11.c

inherit ROOM;

void create()
{
	set("short", "�ر���");
	set("long", @LONG
����һ��ֿ⣬�����������Ӱ˵���Ʒ���������ȥ�ƺ�û���κ�
���м�ֵ�Ķ���������ĵذ�ܸɾ�������һ��ֿ����ػҳ�����߽�
�����һ�������۵�����......
LONG
	);
	set("item_desc", ([ /* sizeof() == 1 */
  "door" : "һ��û�а��ֵİ��ţ���������ƿ���
",
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"school8",
]));

	setup();
}
