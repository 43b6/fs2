#include <ansi.h>
#include </open/open.h>
inherit NPC;

object ob=this_object();
string do_mention(object who);
int j=0 ,k=1;
void create()
{      object ob;
        set_name("κ����", ({ "wei wu-ya","wei","ya"}) );
        set("gender", "����" );
        set("title","[35mʮ��[1;37m����[0m");
        set("nickname","[35m��[0m");
        set("age",59);
        set("str",30);
        set("cps",30);
        set("cor",30);
        set("per",30);
        set("int",30);
        set("spi",30);
        set("con",30);
        set("kar",30);
        set("force",3000);
        set("max_kee",3000);
        set("sen",3000);
        set("max_sen",3000);
        set("kee",3000);
        set("max_gin",3000);
        set("gin",3000);
        set_skill("rain-throwing",100);
        set_skill("blackforce",100);
        set_skill("shade-steps",100);
        set("max_force",3000);
        set_skill("move",100);
        set_skill("force",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("throwing",120);
        map_skill("dodge","shade-steps");
        map_skill("move","shade-steps");
        map_skill("force","blackforce");
        map_skill("throwing","rain-throwing");
        set_skill("unarmed",200);
        map_skill("parry","rain-throwing");
        set("force_factor",20);
        set("chat_chance",10);
        set("chat_chance_combat", 75),
        set("chat_msg_combat", ({
                (: this_object(), "special_att2" :),
                (: this_object(), "special_att" :),
                (: this_object(), "special_att3" :),
                "κ����ȫ��ɢ����͸�ǵĺ��� !\n",
                               })); 
        set("combat_exp", 2000000);
        set("attitude", "heroism");
       
        setup();
        add_money("gold",10);
       ob=carry_object("/open/badman/obj/mouse_bite.c");
       ob->set_amount(600);
       ob->wield();

}

int special_att()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
       message_vision("[31;1mκ�����Բм���,��ɱ�⻻��ħ����[0m\n
            [32m����κ�������Ϸ���һ��ǿ���ħ������[0m\n
    [32;1m��κ��������ħ���𽥵ؾۼ���˫��,��˫�����γ�����ɱ����\n[0m
            κ����ٿ�ش��һ������[36;1m��ħ��ɱ��[0m����\n\n",one);
      message_vision("[31mκ����ͻȻ��ͷһ��������[35mֻ��κ�����������һ��Ѫ����$N��ȥ����[0m\n
[34;1mκ����ʹ����ħ��ɱ֮[0m
              [34m�ռ�����ɱ����[0m ��[33;1;5mħѪ��ɱ[0m��\n
[32;4mֻ��$N������,��κ�����������ش���[0m\n",one);
        after = me->query("kee");
        one->receive_wound("kee",50+random(120));
         COMBAT_D->report_status(one);
        one->start_busy(2);

        return 1;
}
int special_att2()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
       message_vision("[31;1mκ�����Բм���,��ɱ�⻻��ħ����[0m\n
            [32m����κ�������Ϸ���һ��ǿ���ħ������[0m\n
    [32;1m��κ��������ħ���𽥵ؾۼ���˫��,��˫�����γ�����ɱ����\n[0m
            $Nٿ�ش��һ������[36;1m��ħ��ɱ��[0m����\n\n",one);
      message_vision("
              [34m�ھŲ�[0m ��[33;1m��ħ��תҵ[0m��\n
[32;4m�����$N��ɼ������صĴ��ˡ�[0m\n",one);



        after = me->query("kee");
        one->receive_wound("kee",60+random(70));
         COMBAT_D->report_status(one);
        one->start_busy(1);

        return 1;
}
int special_att3()
{
        object *me,one;
        int i;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
       message_vision("[31;1mκ�����Բм���,��ɱ�⻻��ħ����[0m\n
            [32m����κ�������Ϸ���һ��ǿ���ħ������[0m\n
    [32;1m��κ��������ħ���𽥵ؾۼ���˫��,��˫�����γ�����ɱ����\n[0m
            $Nٿ�ش��һ������[36;1m��ħ��ɱ��[0m����\n\n",one);
      message_vision("
              [34m�ڰ˲�[0m ��[33;1m��ħ������[0m��\n
[32;4m�����$N��ɼ������صĴ��ˡ�[0m\n",one);


        one->receive_wound("kee",40+random(70));
        one->apply_condition("bleeding",10);
        one->start_busy(1);
        COMBAT_D->report_status(one);
        return 1;
}













