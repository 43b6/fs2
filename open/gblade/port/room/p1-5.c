// Room: /open/gblade/port/room/p1-5.c
inherit ROOM;

void create()
{
  set ("short", "�ĺ�����");
  set ("long", @LONG
�����ǵ����ܲ����� , ���ڽ��������ڴ� , �����ܲ�Ҳ
��ʮ����ǰ������Ǩ������ , �ͽ����յ��� , �����ָ�Ҳ���
��Ϊ���͵Ĵ�Ӫ , ֻҪ���� (join) ���͵����� , �������
�����ɰ�ʦѧ�� .

LONG);

set("objects",([
	"/daemon/class/blademan/master" :1 ,
	"/open/gblade/port/npc/blademan":1,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p1-4",
]));
  setup();
}
