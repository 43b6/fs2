// Room: /d/oldpine/pine1.c

inherit ROOM;

void create ()
{
  set ("short", "��ɽ����֮����");
  set ("long", @LONG
�㿴��һ�������������,�������ֻ��һƬ: �� !! �� !! ��
 !! �����һ�����ȼ�����������,ȴ�ֲ���������κ�����,����?
? �ǵĻ���,��һ��ֻ�ǻ��� !! ֻҪ���ܿ��ƻ���,�����ƽ�������
...
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");
  set("exits", ([ /* sizeof() == 4 */
  "wood" : __DIR__"mroom1",
  "gold" : __DIR__"mcenter",
  "land" : __DIR__"mroom2",
  "water" : __DIR__"mroom2",
]));

  setup();
}

void reset()
{
	::reset();
	set("exits", ([ 
	  "wood" : __DIR__"mroom" + (random(4)),
	  "gold" : __DIR__"mcenter",
	  "water" :  __DIR__"mroom" + (random(4)),
	  "land" :  __DIR__"mroom" + (random(4)),
	]));
}

int valid_leave(object me, string dir)
{
	write("һ�������Ϯ����....\n");
	switch(dir) {
		case "wood":	write("����ľ���뿪.....\n");	break;
		case "land":	write("���������뿪.....\n");	break;
		case "water":	write("����ˮ���뿪.....\n");	break;
		case "gold":	write("���������뿪.....\n");	break;
		default:
			write("��ͨ��һ������....");
	}
	return 1;
}
