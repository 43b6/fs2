// Tnpc.c
// �޸�ES2's liu npc 
#include <ansi.h>

inherit NPC;

string ask_me(object who);

void create()
{
        set_name("����", ({ "King girl", "girl" }) );
        set("title", "����ʺ�");
        set("gender", "Ů��" );
        set("age", 22);
        set("str", 22);
        set("cor", 30);
        set("cps", 21);
        set("int", 25);
        set("per", 29);
        set("long",
                "�������ǵ���ʥ�ϵ�����, ��Ϊ��������֮�ʺ�\n" );
        set("combat_exp", 30000);
        set("attitude", "heroism");
        set("chat_chance", 15);
        set("chat_msg_combat", ({
                "����˵�����󵨿�ͽ, �������ʳ���Ұ��\n",
                "����˵�������˰�..�д̿�!!\n",
           }) );
        set("inquiry", ([
                "������": (: ask_me :),
                "ħ��֮ͽ": (: ask_me :)
        ]) );

        set_skill("unarmed", 30);
        set_skill("parry", 30);
        set_skill("dodge",30);

        setup();
  
        carry_object("/obj/cloth")->wear();
}

string ask_me(object who)
{
        int i;
        object *ob;

        if( query("revealed") ) {
                if( is_killing(who) ) return "���Ȼ֪�����ҵ���֣������������
��\n";
                else {
                        kill_ob(who);
                        who->fight_ob(this_object());
                        return "�ø���֪����ļһ�, ��������ħ����ʹͷ����Ұ����������\n
";
                }
        }

        if( (random(10) < 5)
        ||      !is_fighting() )
                return "��..��..����˵����\n";
        set_temp("apply/attack", 80);
        set_temp("apply/dodge", 50);
        set_temp("apply/parry", 60);
        set_temp("apply/damage", 30);
        set("title", "ħ����ʹ");
        set("nickname", HIR "������" NOR);
        message("vision",
                HIY "�����������˵Ĺ�â������˵��������...�㶼֪���ˣ�
\n\n"
                "�������һ�����е�����Ȼ��ˣ����������ȥ�ˣ���������\n" NOR
                "����ʹ��ħ�̵�����, �������棬���ͺ������͸ղż�ֱ�������ˣ�\n",
                environment(), this_object() );
        set("attitude", "aggressive");
        set("chat_msg_combat", ({
                (: this_object(), "random_move" :)
        }) );
        set("chat_msg", ({
                (: this_object(), "random_move" :)
        }) );
        ob = all_inventory(environment());
        for(i=sizeof(ob)-1; i>=0; i--) {
                if( !ob[i]->is_character() || ob[i]==this_object() ) continue;
                kill_ob(ob[i]);
                ob[i]->fight(this_object());
        }
        carry_object(__DIR__"obj/blade_book");
        set("revealed", 1);
        return 0;
}

int follow_me(object ob, string dir)
{
        if( is_killing(ob) ) {
                remove_all_enemy();
                message("vision", "�����ȴ�ȣ�����һ��Ҳ�����ߣ�\n",
                        environment(), this_object() );
                command("go " + dir);
        }
}
