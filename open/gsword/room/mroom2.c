// Room: /d/oldpine/pine1.c

inherit ROOM;

void create ()
{
  set ("short", "��ɽ����֮����");
  set ("long", @LONG
�㿴����ɽ����ľΧ����,�������ֻ��һƬ: �� !! �� !!
�� !! ���������������������,ȴ�ֲ���������κ�����,����
?? �ǵĻ���,��һ��ֻ�ǻ��� !! ֻҪ���ܿ��ƻ���,�����ƽ���
����...
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "gold" : __DIR__"mroom3",
  "land" : __DIR__"mroom3",
  "fire" : __DIR__"mroom2",
  "water" : __DIR__"mroom1",
]));
  set("light_up", 1);

  setup();
}

void reset()
{
	::reset();
	set("exits", ([ 
	  "fire" : __DIR__"mroom" + (random(4)),
	  "water" : __DIR__"mroom" + (random(4)),
	  "land" :  __DIR__"mroom3",
	  "gold" :  __DIR__"mroom" + (random(4)),
	]));
}

int valid_leave(object me, string dir)
{
	write("����������������....\n");
	switch(dir) {
		case "fire":	write("���������뿪.....\n");	break;
		case "land":	write("���������뿪.....\n");	break;
		case "water":	write("����ˮ���뿪.....\n");	break;
		case "gold":	write("���������뿪.....\n");	break;
		default:
			write("��ͨ��һƬ����....");
	}
	return 1;
}
