#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "ɱ����ϰ��");
  set ("long", @LONG
   ����ɱ�ֵ���ϰ�������طǳ��Ŀ�㳡�ģ���Χ��������ľ��
   ���ƺ����ص�Ϊɱ�����������������ϰ�Ṧ�밵���ַ��ĳ��ء�
   Ȼ��������Ҳ�в������ڽ���ʵս��ϰ������ȴ�Ҳ������ǵ����ڡ�
   ֻ���ĵ����ϴ�����ɱ���������������
   �㳡�У���ͷ���Ĵ��Ĺ۲��ţ�ÿ���˵���ϰ���Ρ�
   ������ʱ���Զ�����ָ������ȱʧ���ˡ�������

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "west" : __DIR__"outr12.c",
      "north" : __DIR__"outr9.c",
]));
  set("objects",([
      "/open/killer/npc/killer_b.c":1,]));
  setup();
}