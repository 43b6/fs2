
#include <ansi.h>
#include </open/open.h>

inherit NPC;
string do_change();
string do_faceoff();
void create()
{
          set_name("�����", ({ "mama shyu","mama","shyu" }) );
	set("gender", "Ů��" );
        set("age",45);
        set("str",35);
        set("cor",35);
	set("cps", 25);
	set("int", 15);
      set("long","����ķ��ˡ�\n");
	set("combat_exp",338);
	set("attitude", "peaceful");
        set("inquiry",([
        "����":(: do_change :),
      "����":(: do_faceoff :),
	"�������":"����һ��,���޷ֺ�,������ǧ���ƽ�,������ǧ���ƽ�\n", ]));
             set("chat_chance", 20);
        set("chat_msg", ({
           "�����С��������Ŷ,�ο�������....\n",
        }) );
	setup();
        carry_object("/obj/cloth")->wear();
}

int accept_fight(object me){
        return notify_fail("�����е� : ز���!���Ҷ����?!\n");
}
string do_change(){ 
        object who;
        string str;
        who = this_player();
        str = "����һ����ǧ���ƽ�\n";
        if( !who->can_afford(50000000) ) {
        str += "Ǯ���������ǾͶԲ����ˡ�\n";
          return str;        }
       else {   who->pay_money(50000000);
                who->set_temp("change", 1);
                message_vision("$N���������һ��Ǯ��\n", who);
                  str += "�ţ����������������ߡ�\n";
                return str;
}
}
string do_faceoff(){ 
         object who;
         string str;
         who = this_player();
str = "����һ��һǧ������ƽ�\n";
          if( !who->can_afford(15000000) ) {
          str += "Ǯ���������ǾͶԲ����ˡ�\n";

           return str;        }
        else {   who->pay_money(15000000);
                 who->set_temp("faceoff", 1);

                 message_vision("$N���������һ��Ǯ��\n", who);
                    str += "�ţ����������������ߡ�\n";
               return str;
}}


