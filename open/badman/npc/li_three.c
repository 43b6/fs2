#include "/open/open.h"
inherit NPC;
void do_sword_book();
void create()
{
        set_name("����", ({ "li three","li","three" }) );
        set("family/family_name","���˹�");
        set("class","bandit");
        set("gender", "����" );
        set("age", 38);
        set("long",
"һ����ͷ���Ե����ӣ���������æ��ĳ��
������󣬼������������һ����������
���ǰѱ���ร��̲�ס������һ�ʡ�\n");
        set("combat_exp",2500000);
        set("max_kee",7500);
        set("kee",7500);
        set("max_sen",1500);
        set("sen",1500);
        set("max_gin",1500);
        set("gin",1500); 
        set("max_force",3000);
        set("force",6000);
        set("force_factor",10);
        set("bellicosity",3000);
        set("title","���ֿտ� ");
        set_skill("parry",100);
        set_skill("dodge",100);
        set_skill("sword",100);
        set_skill("badsword",100);
        set_skill("ghost-steps",100);
        set_skill("force",120);
        set_skill("badforce",200);
        map_skill("dodge","ghost-steps");
        map_skill("force","badforce");
        map_skill("sword","badsword");
        map_skill("parry","badsword");
        set_temp("apply/attack",20);
        set_temp("apply/armor",20);
        set_temp("apply/dodge",20); 
        set("inquiry",([
"����" : "�����Ҵӽ���������͵���ģ����Ǻ��м�ֵ�أ�",
"͵��" : "�ǡ���͵�ļ������Ǻܸ�����ร�Ҳ��˲Żᱻ��׷ɱ���������",
"׷ɱ" : "�ߣ���������һ����ѧ�󣬾����ҳ���ʱ�ˣ�",
"��ѧ" : "���ɸ���͸¶�أ���Ҫ�����ˣ����ɡ�",
"ħ�ս���" : "ħ�ս������ǲ������Ƶ����־����������������������أ�",
"ħ�ս���" : (: do_sword_book :),
]));
        setup();
        carry_object("/open/gsword/obj/sword.c")->wield();
        carry_object("/u/k/know/plan/sword.c");
        carry_object("/u/k/know/plan/book.c");
}
void do_sword_book()
{
object me=this_player();
command("think "+me->query("id"));
command("say ��Ȼ���Ѳ鵽��ͷ�����ˣ��ݹ��������ˣ�");
command("kill "+me->query("id"));
}
int accept_kill(object who)
{   
    command("say �������ɣ�");
    command("wield all");
    return 1;
}
void die()
{
   object me;
   me= this_object()->query_temp("last_damage_from");
   if( me&& userp(me) ) 
   {
   me->set_temp("get_badsword_book",1);
   }
   ::die() ;
}
