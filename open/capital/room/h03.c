// Room: /open/capital/room/h03.c

inherit ROOM;

void create()
{
	set("short", "������ͬ");
	set("long", "������ͬ��Ҳ��һ�����ֵĴ��, ƽ�������������˳�, ������ѡ
��һЩ�ķ��ı�--�ʡ�ī��ֽ���⡣������Ķ�������û��һЩ�׻�, 
ÿ��������������Ǿ�Ʒ, ��˴󲿷ֵ����˶�ϲ������ѡ�����ǳԷ�
�ļһ
");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h02",
  "east" : __DIR__"h04",
]) );

  set("outdoors", "/open/capital" );


  setup();
}
