// ����̫�� by xboy
#include <ansi.h>
inherit NPC;

void create()
{
        set("long","
��ǰ������ߣ����뼰�أ�������ڣ�һ˫�����Ĵ��ģ�����Զ����
գҲ��գһ�£���ɫľȻ���ƺ���������һ�㣬��·���ܵ�һ�ɲ���
��Ԥ�У��������˸���ս��\n");
        set("gender","����");
        set("clan_kill",1);
        set("class","fighter");
        set("nickname",HIY"�����ӯ"NOR);
        set("title","�Ĵ����֮��");
        set_name("������",({"Duan ya-chun","duan","chun"}));
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("attitude","aggressive");
        set("max_force",5000);
        set("force",5000);
        set("max_kee",3000);
        set("kee",3000);
        set("max_gin",4000);
        set("max_sen",4000);
        set("sen",4000);
        set("gin",4000);
        set("str", 35);
        set("cor", 35);
        set("cps", 30);
        set("int", 30);
        set("force_factor",15);
        set_skill("dodge",100);
        set_skill("force",100);
        set_skill("parry",100);
        set_skill("six-fingers",100);
        set_skill("unarmed",40);
        set_skill("stabber",150);
        set_skill("literate",100);
        set_skill("sunforce",150);
        map_skill("force","sunforce");
        map_skill("unarmed","six-fingers");
        map_skill("stabber","six-fingers");
        map_skill("parry","six-fingers");
        set("functions/handwriting/level",20);
        set("chat_chance_combat", 15);
         set("chat_msg_combat", ({
                (: perform_action("six-fingers.handwriting") :),
        (: this_object(),"special_attack" :),
        }));

        setup();
        carry_object("/open/tailong/obj/i-staff")->wield();
        carry_object("/open/tailong/obj/i-staff")->wield();
        add_money("cash", 5);

}

 int special_attack()
 {
   object ob,me;
   int k;
   me = this_object();
   k = random(10);
   ob=this_object()->query_enemy();
   if(k > 7)
   {
   message_vision(HIG"
\n\n�����������������, ͻȻ���"BLINK+HIR"����"HIC"��"HIG"��"HIM"��"HIW"�㡯"HIG", ֻ������"HIB"�����̻������ߵ���â,
 
���㼲������, ��ȫ��¢�������ν���֮��, ����ά��, ˲ʱ�ܵ��޷����Ƶ��˺�!!!!!\n\n"NOR,this_object());
   ob->add("kee",-200);
   }
   else
   {
   message_vision(HIY"\n
����̫��˫�ַ���ҵ�, ����������, ֯��һ��ҫ�۽���,�������ǶμҵĽ���ɱ��

                        "HIW"����"HIM" ��"HIG" ��"HIW" ����

��������������������������������������"HIR" ��"NOR+CYN" ��"HIC" ��"HIW" ����

"RED"�����ݽ�������, ��β�������, ��ʱ��������������, ֻ��������Σ��!!!\n\n"NOR,this_object());
ob->add("kee",-100);
me->add("kee",100);
   }
  return 1;
  }

void heart_beat()
{
 object me;
        if( random(5) < 4 ){
        if(!is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
            if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
                           }
        }
        :: heart_beat();
}

void die()
{
   object me,book;
   me= query_temp("last_damage_from");
        tell_object(users(),HIY"

         ����̫������̾����"HIC"��"HIW"�Ϸ�ʹ�����϶�Թ������ʮ��
                             ���վ�����"BLINK+HIY+me->query("name")+NOR+HIW"֮�֣�
                             �ѵ���..��..��..Ǵ..��..��..��......"HIC"��

"NOR);

   if(me->query("marks/six_sp")<3 && !me->query("quest/4-badman"));
   {  
   me->set("marks/six_sp",2);
   me->set_temp("six_sp_quest",10);
   book=new("/open/tailong/obj/six_book");
   book->move(me);
   tell_object(me,
HIY"�����ո�������̫��һս������̫�ӵ������ַ������������
�������������Լ���Ȼ�ܴ������\n"+
"��ϸ������̫��ս��ʱ�Ŀ����飬���ɵ��Լ��Ȼ�������\n"+
HIC"��ϰ���˽���ɱ��"HIW"���޳����޲��졯"NOR"!\n\n"+
"���Զ����������ѳ�"HIY"�������񽣽�����"NOR"!\n"
);

   }
//  call_out("msg2",1,me);
   message_vision(HIG"��Ȼһ����Ӱ�Լ�����ٶ�һ������, ���㶨��һ��, ��Ӱ����Ѿ���ʧ, ������Ҳ������!!\n"NOR,this_object());
   destruct(this_object());
}

/*
void msg2(object me)
{
message("mud",HIR"\n�Ϻ�������:�㾹Ȼɱ�������ϴ����ӽ���ҪѪϴƽ�ϳ�!!!\n" NOR,me);
        ::die();

}
*/
