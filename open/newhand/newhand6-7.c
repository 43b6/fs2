#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ���ʷ��չ��"NOR);
  set( "long", "����ռ�����ͼ��������˴�ѧ����Ĵ�����Weiwei,ͬʱWeiwei����
���lib�ͷų�ȥ,����Weiwei��ʼ���ָİ����ռ�,���ڵĿ���ռ�
��ʹ��MudOS v21c2��driver,�����кܶ��ȱ�����,��������������
driver�Ĺ�ϵֻ������ʮ��֮��..���д���һЩ�����BUG,����Weiwei
������һ��������(����˵��,���ܸ���)�İ���MudOS v22 a16�İ屾��
ͬʱ��֮ǰ�������ʦAnmyҲ����ר�����˿����ϲ���վ
" );

  set("exits", ([
  "north" : __DIR__"newhand6-6",
  "south" : __DIR__"newhand6-8",
               ]));
  set("light_up", 1);
  setup();
}

