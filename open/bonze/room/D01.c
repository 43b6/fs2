// Room: /open/soulin/room/D01.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
	��ΰ׳�������ţ���ʾ������������������������
	�Ĵ�ҷ緶����������˵��������Ī��������ָ��
	�ޣ��ǹ����˴��������书������֮�ף��������١�	�����������������ƿ���Ҳ���м��ֿ��Ŷȡ�


LONG);

  set("objects", ([ /* sizeof() == 1 */
"/open/bonze/npc/konwun":1,
]));
  set("outdoors", "/open/soulin");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r8",
  "enter" : __DIR__"s02",
]));

  setup();
}
int valid_leave(object who, string dir)
{
  if( present("kon wun", this_object()) ) {
if(who->query("bellicosity") > 700 && who->query("id")!="swordsman") {
        return notify_fail("����������ʮ����΢Ц��: ������Ϊ���ž��أ�ʩ��ɱ��֮��̫�أ�����������\n");
   }
  }
 
  return ::valid_leave(who, dir);
}
