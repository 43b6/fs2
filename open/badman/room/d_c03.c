inherit ROOM;

void create()
{
  set("short", "����");
  set("long", "�������ͨ���ľ�ͷ������ϡ΢�Ļ��֮�¿�������ѻ���
�൱��Ĳ��ϡ�һֻ������Ϊ�Ӵ���������ڵ���ͷ�Բݡ��Ӡ�
�����ȴ�³���Щ��ɳ�����������������ͷ˵����������ˣ�
");
  
  set("exits", ([ /* sizeof() == 1 */
  "back" : __DIR__"d_c02.c",
]) );

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/t_camel.c" : 1,
]));
  set("light_up",1);

setup();
}
