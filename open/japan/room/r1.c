// Room: /u/c/cyw/room/r1
inherit ROOM;

void create ()
{
  set ("short", "������ϰ��");
  set ("long", @LONG
����ŮӰ��ƽʱ�������ĵط�,���ܲ��ϵ��д��ź���װ������
����ϰ������,��������ȶ��˵���̬���Կ�������װ��Ӧ����Ů��
,��һ�ð����������и�Ư����Ů���ڴ�����Щ�������书��������
������ȥһ������������Ϊ֮һ�������㴫����ı���,ԭ��������
ŮӰ�ŵ��������,�������������Ǹ�����ɰ�����Ů��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/japan/npc/master.c" : 1,
]));
  set("light_up", 1);
  set("outdoors", "/u/c/cyw/room");
  set("exits", ([ /* sizeof() == 1 */
  "west" : "/u/c/cyw/workroom.c",
]));

  setup();
}
