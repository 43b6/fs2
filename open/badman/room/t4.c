// Room: /open/badman/room/t4.c

inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG
ͨ�������������ͨ���Ժ��������˵ص�����һ�ˣ�������
ȫû�иո���Щ�����Ĵ��ڣ��ɼ���Щ����������Ϊ�˲����˷���
������Ū�����İɣ�����������ͨ��ĳ���ط�������ͨ��Ҳ˵��һ
����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/badman/room/t5",
  "east" : "/open/badman/room/t3",
]));

  setup();
}
