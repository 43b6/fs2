#include <ansi.h>
inherit NPC;
void create()
{
    set_name("����ɱ�ֽ�ͷ",({"trainer"}) );
    set("long",
   "��������ʵս����,ר����������ϰ���˶��У����ܸ��Ÿ���\n");
    set("race", "����");
    set("gender","����");
     set("combat_exp",15000);
    set("age",40);
    set("title","��������Ա");
    set("kee",300);
    set("max_kee",300);
    set("bellicosity",300);
    set_skill("sword",45);
    set_skill("shadow-kill",25);
    map_skill("sword","shadow-kill"); 
    set("chat_chance", 3);
    set("chat_msg", ({ (: this_object(), "random_move" :),
    "��ͷ��ŭ��˵: С��,��͵�� !\n",
 }));
    setup();
   carry_object("/open/gsword/obj/woodsword")->wield();
   add_money("silver",10);
}