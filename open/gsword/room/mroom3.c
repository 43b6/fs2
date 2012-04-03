// Room: /d/oldpine/pine1.c

inherit ROOM;

void create ()
{
  set ("short", "��ɽ����֮����");
  set ("long", @LONG
�㿴��һ���ɳ�������,�������ֻ��һƬ____ ���� _____
����,��ɳ��ʯ�񱩵ĳ���������,ȴ�ֲ���������κ�����,����
??  �ǵĻ���,��һ��ֻ�ǻ��� !! ֻҪ���ܿ��ƻ���, �����ƽ���
����...
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");
  set("exits", ([ /* sizeof() == 4 */
  "wood" : __DIR__"mroom3",
  "gold" : __DIR__"mroom3",
  "fire" : __DIR__"mroom1",
  "water" : __DIR__"mroom4",
]));

  setup();
}

void reset()
{
	::reset();
	set("exits", ([ 
	  "wood" : __DIR__"mroom" + (random(4)),
	  "water" : __DIR__"mroom4",
	  "gold" :  __DIR__"mroom" + (random(4)),
	  "fire" :  __DIR__"mroom" + (random(4)),
	]));
}

int valid_leave(object me, string dir)
{
	write("һ���ɳ��Ϯ����....\n");
	switch(dir) {
		case "wood":	write("����ľ���뿪.....\n");	break;
		case "fire":	write("���������뿪.....\n");	break;
		case "water":	write("����ˮ���뿪.....\n");	break;
		case "gold":	write("���������뿪.....\n");	break;
		default:
			write("��ͨ��һ��籩....");
	}
	return 1;
}
