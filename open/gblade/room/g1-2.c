inherit ROOM;

void create ()
{
 set ("short", "����ͤ");
  set ("long", @LONG

��˵���ŵĵ�һ��������һ���󽫾�������Ϊ�˺�����ʿ������������
��Ӣ�۴�ᣬ�����������ﴴ�����ţ�Ϊ�˼�����Ǵε�Ӣ�۴���
�����ｨ��һ��ͤ�ӣ�����Ϊ����ͤ�������㲻�����������Ӣ�۴��
����òŻ��������

LONG);


  set("light_up", 1);
  set("outdoors", "/open/gblade");

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"g1-3.c",
	"out" : "/open/gblade/room/g1-1",
]));

  setup();
}
int valid_leave(object me,string dir)
{
 if(dir=="out")
 me->delete_temp("lose_cup");
 return 1;
 }
