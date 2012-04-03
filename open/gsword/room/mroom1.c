// Room: /d/oldpine/pine1.c

inherit ROOM;

void create ()
{
  set ("short", "��ɽ����֮����");
  set ("long", @LONG
�㿴��һ����¤������,�������ֻ��һƬ���!! ���!!
���!! �����⴩͸���������,ȴ�ֲ���������κ�����,���� 
?? �ǵĻ���,��һ��ֻ�ǻ��� !! ֻҪ���ܿ��ƻ���,�����ƽ���
����...
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "wood" : __DIR__"mroom2",
  "land" : __DIR__"mroom3",
  "fire" : __DIR__"mroom1",
  "water" : __DIR__"mroom0",
]));
  set("light_up", 1);

  setup();
}

void reset()
{
	::reset();
	set("exits", ([ 
          "water":__DIR__"mroom" + (random(4)),
          "land":__DIR__"mroom" + (random(4)),
          "wood":__DIR__"mroom2",
          "fire":__DIR__"mroom" + (random(4)),
	]));
}

int valid_leave(object me, string dir)
{
	write("һ�����ֱ������....\n");
	switch(dir) {
		case "wood":	write("����ľ���뿪.....\n");	break;
		case "land":	write("���������뿪.....\n");	break;
		case "water":	write("����ˮ���뿪.....\n");	break;
		case "fire":	write("���������뿪.....\n");	break;
		default:
			write("��ͨ��һ�����....\n");
	}
	return 1;
}
