#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
int do_list();
void create() {
set("short",CYN"ר�����Ｏɢ����"NOR);
set("long",@LONG

�����Ǵ�˵�е�ר�����﷢ɢ���ġ�ֻ�д�˵�еĴ�������������
ȡ��ר�ŵ����������Щ���ｫ����ʹ���ս������Ϊ��������
�߾��硣�����ʹ��(list)�鿴��������һЩ��������ȡ������!!

LONG);
        set("exits",([ /* sizeof() == 1 */
         "east" : "/open/wiz/skroom",
      ]));
        set("light_up", 1);
        set("no_kill", 1);
        set("no_fight", 1);
        set("no_magic", 1);
        setup();
}

void init() {
        add_action("do_list","list");
        add_action("do_get_horse","get_horse");

}

int do_list() {
write("          ��������                    ��������
       ----------------------------------------------------------
                 crythree                    ���ƻ���
                 ddt                         ��������
                 dunga                       ��������
                 hikki                       �˷�ɱħ
                 killer                      ��������
                 leon                        ɱ������
                 lovesui                     ���ѩӰ
                 ollie                       ��Ѫ����
                 rry                         �˼�����
                 sdgudam                      Х��Ȯ
                 smirk                       ��������\n"); 
write("          victor                       ������
                 pony                         ��Ѫר������
                 zard                        ��¬��
                 kaze                        ��¬��
                 bloodblade                  Ʀ����
                 snowcraft                   ����Ļƻ�
       ---------------------------------------------------------
           ��ֻ���� get_horse ���ɽ����������лл���Ĺ��٣�\n\n");
        return 1;
}
int do_get_horse() {
        object me = this_player(),mid;
        string name=me->query("id");
        if(me->query_temp("get_net_horse"))
         return notify_fail("һ������ֻ����һ���Լ���������!!!��\n");
        switch(name) {
  case "cyr" :
              mid = new("/nets/horse/cyrthree");
                break;
           case "ddt"    :
              mid = new("/nets/horse/ddt");
                break;
           case "dunga"    :
              mid = new("/nets/horse/dunga");
                break;
           case "hikki"     :
              mid = new("/nets/horse/hikki");
              break;
case "yukigirl"     :
		mid = new("/nets/horse/yukigirl"); 
              break;
           case "leon"  :
              mid = new("/nets/horse/leon");
              break;
           case "lovesui"  :
              mid = new("/nets/horse/lovesui");
              break;
           case "ollie"     :
              mid = new("/nets/horse/ollie");
              break;
           case "rry"  :
              mid = new("/nets/horse/rry");
              break;
           case "sdgudam"  :
              mid = new("/nets/horse/sdgudam");
              break;
           case "smirk" :
              mid = new("/nets/horse/smirk");
              break;
           case "victor" :
              mid = new("/nets/horse/victor");
              break;
           case "pony" :
                mid = new("/nets/horse/pony");
             break;
/*
           case "julio" :
                mid = new("/nets/horse/julio");
             break;
*/
           case "snowcraft" :
                mid = new("/nets/horse/snowcraft");
             break;
           case "bloodblade" :
                mid = new("/nets/horse/bloodblade");
             break;
           case "zard" :
                mid = new("/nets/horse/zard");
             break;
           case "kaze" :
                mid = new("/nets/horse/kaze");
             break;
           case "smallthree" :
                mid = new("/nets/horse/smallthree");
             break;
/*
           case "libra" :
                mid = new("/nets/horse/libra");
             break;
           case "libraa" :
                 mid = new("/nets/horse/libra");
              break;
*/
default : return notify_fail(HIY
"�Բ���!!!�����Ǵ�˵�еĴ���,���û��ר��������!!\n"NOR);
        }
        if(!me->query("fs_net3/horsestby")) {
         write("����ʱ����̫����.���Բ��������������λ!!\n");
         me->add("standby",2);
         me->set("fs_net3/horsestby",1);
         }
        mid->move(environment(me));
        mid->set_leader(me);
        me->set_temp("get_net_horse", 1);
        message_vision(HIW"һ���׹⽵��!!$N��ר�����������$N֮ǰ��\n"NOR,me);
     log_file("net/horse", sprintf("%s(%s) ��ȡר������!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
}

