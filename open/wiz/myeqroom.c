#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
int do_list();
void create() {
set ("short",HIG"���۽�Ʒ����ҷ��ߡ����Ŵ�"NOR);
set ("long","������۹��н�����ʮλ��Ҳμ�!!!!
���۵Ľ�Ʒ�����help fs_net��help fs_net2
�˷���������������ҷ��ߵķ���
���ߵķ����Ƿ�������ķ���!!!
ָ�����£�
          get_myeq  <��ȡ������۵Ľ�Ʒ>

��ע�⣺���EQ����һ��!!!�Ҳ��ܸ�������.....
����ϵͳ�趨���EQ����,��POST.����һ����ʱ�����!!
���Ჹ��!!!!
");
  set("no_kill",1);
  set("no_fight",1);
  set("light_up",1);
  set("exits", ([
  "north" : "/open/wiz/godroom",
  ]));

}

void init() {
        add_action("do_get_myeq","get_myeq");

}
int do_get_myeq() {
        object me = this_player(),mid,lanc;
        string name=me->query("id");
        if(me->query("fs_net3/myeq"))
         return notify_fail("���Ծ�����.....!!\n");
        switch(name) {
           case "lancelin"    :
              mid = new("/data/autoload/player-eq/lancelin");
              lanc = new("/data/autoload/player-eq/lancelin-weapon");
                break;
           case "aspire"    :
              mid = new("/data/autoload/player-eq/aspire");
                break;
           case "zero"    :
              mid = new("/data/autoload/player-eq/zero");
                break;
           case "amy"     :
              mid = new("/data/autoload/player-eq/amy");
              break;
           case "pnx"   :
              mid = new("/data/autoload/player-eq/pnx");
              break;
default : return notify_fail(HIY
"�Բ���!!!����������֮��!!\n"NOR);
        }
        mid->move(me);
        me->set("fs_net3/myeq", 1);
        write("��ϲ���õ�������������͵ķ���!!!\n");
        write("����ʱ����̫����.���Բ��������������λ!!\n");
        me->add("standby",3);
        if (name == "lancelin")
         lanc->move(me);
     log_file("net/myeq", sprintf("%s(%s) ��ȡר������!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
}

