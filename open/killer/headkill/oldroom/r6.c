// Room: /u/l/leei/blacktest0.c
inherit ROOM;

void create()
{
  set ("short", "ɱ����ϰ��һ");
  set ("long", @LONG
   �������м�ɱ�ֵ�ѵ����֮һ
��Ҫ��Ϊ�õ�ɱ�ֱ��뾭�����ϵĶ���
�����������������ɱ�ֵķ���֮һ
��Ҫ��Ϊ�õ�ɱ��������Ͷ���!!

����ǽ�ϵ�ѵ����������ƵĻ��������������ǵ����ѵ������
��˵����ÿһ�䶼����λʦ���ڴ�ѵ��ɱ�֣�
����ÿһλ��ս��������ʵ��û������ǧ�㡣
LONG);

  set("light_up", 10000);
  set("no_magic", 10);
  set("exits", ([ /* sizeof() == 1 */
	"west":__DIR__"r5",
]));
/*
  set("objects",([
	"open/killer/npc/trainee2": 4,
    ]));
*/
   setup();
}
