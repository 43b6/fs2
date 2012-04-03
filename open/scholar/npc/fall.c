//written by AceLan..../u/a/acelan/npc/fall.c
//Rewrite By AceLan fall.c 98.7.16...��ǿ�����书�����...
//Motify by AceLan 98/11/1 ���ӹ���������

#include "/open/open.h"
#include <ansi.h>

inherit F_VENDOR;

string make_weapon();
int init_weapon();
int about_weapon();
int in_combat();
int scholar_finger();
object reload_weapon( object);

void create()
{
   object ob;
   
   set_name("��ʤ��",({"zhu fall", "zhu", "fall"}));
   set("long", @LONG
����֮���ָ���, ��(��������)������������˵������(����)ʧ��
�Ѿ�֮�������˶Ծ�ս, �������֡�
LONG);
   set("nickname", "����");
   set("race","����");
   set("gender","����");
   set("combat_exp",500000);
   set("attitude","friendly");
   set("age",50);
   set("force_factor", 10);

   set("max_gin", 2000);
   set("eff_gin", 2000);
   set("gin", 2000);
   set("max_kee", 2000);
   set("eff_kee", 2000);
   set("kee", 2000);
   set("max_sen", 2000);
   set("eff_sen", 2000);
   set("sen", 2000);
   set("max_force", 2000);
   set("force", 2000);
   set("max_atman", 2000);
   set("atman", 2000);
   set("max_mana", 2000);
   set("mana", 2000);

   set("str", 30);
   set("cor", 30);
   set("per", 30);
   set("int", 30);
   set("cps", 30);
   set("con", 30);
   set("spi", 30);
   set("kar", 30);
   set("family/family_master", "С����");
   set("family/family_name", "����");

   set_skill("force", 100);
   set_skill("dodge", 100);
   set_skill("move", 100);
   set_skill("parry", 100);
   set_skill("magic", 100);
   set_skill("unarmed", 100);
   set_skill("stabber", 100);
   set_skill("sword", 100);
   set_skill("blade", 100);
   set_skill("dagger", 100);
   set_skill("plan", 100);

   //����
   set_skill("literate", 100);                  //��Ϊ����, �����������...
   set_skill("knowpen", 100);
   set_skill("poetforce", 100);
   set_skill("winter-steps", 100);
   set_skill("god-plan", 100);
   //�ɽ�
   set_skill("shasword", 100);
   set_skill("shaforce", 100);
   set_skill("sha-steps", 100);
   //����
   set_skill("dragon-dagger", 100);
   set_skill("oneforce", 100);
   set_skill("chen-steps", 100);
   //��
   set_skill("fast-blade", 100);
   set_skill("gold-blade", 100);
   set_skill("fly-steps", 100);
   set_skill("sixforce", 100);
   //�μ�
   set_skill("six-fingers", 100);
   set_skill("sunforce", 100);
   set_skill("linpo-steps", 100);
   //����
   set_skill("badstrike", 100);
   set_skill("badforce", 100);
   set_skill("ghost-steps", 100);
   //ѩ��
   set_skill("snow-martial", 100);
   set_skill("snowforce", 100);
   set_skill("black-steps", 100);
   //¤ɽ
   set("functions/kang_kee/level", 50);

   set_skill("lungshan", 100);
   set_skill("haoforce", 100);
   set_skill("henma-steps", 100);
   //����
   set_skill("necromancy", 100);
   set_skill("gwhip", 100);
   set_skill("gforce", 100);
   set_skill("g-steps", 100);


   //��Ϊ�����ŵ� ��������������书...
   map_skill("force", "poetforce");
   map_skill("parry", "knowpen");
   map_skill("dodge", "winter-steps");
   map_skill("move", "winter-steps");
   map_skill("stabber", "knowpen");
   map_skill("plan", "god-plan");

   set("vendor_goods", ({
       GS_OBJ"woodsword",
       GS_OBJ"sword",
       GS_OBJ"woodblade",
       "/obj/example/dagger",
       "/open/gblade/obj/blade",
       "/open/ping/obj/fan-2",
       "/open/poison/obj/longwhip",
       "/open/gblade/obj/pen",
   }) );

   set("inquiry", ([
       "�������"    :    @LONG
��ʦ���ĵ�����о��ǡ����Ż�ָ����, �������(������)֮ʱ
, ��ʦ����������һ���֡�
LONG,
       "������"      :    @LONG
������ʦ�����Լ��������Ĵ����֮һ, ���������׳������
, �ؽ�����������λʦ�ֵ������������, ������һ��ͬ���书��
LONG,
       "����"        :    @LONG
��...Ϊ����Ҫ�Ҿɻ�������...�뵱����ʦ�����Ҳ���, û�뵽
��ʦ�������⵽����, ��ʹ����(�������)��˶�ʧ����, ��Ϊ��׷
��ɱ����ʦ��������, �Ѿ��ڴ����������˺ü�����, ����ȴ��һ��
ͷ��Ҳû��...
LONG,
       "��������"    :    (: make_weapon :),
       "����"        :    @LONG
�ϼѵĲ���, ���ƽ����ϼ�Ϊ�ѵõ�(��������), ���������Ĳ�
��ֻ��Ҫ����������κ�һ����, �ټ���һ(����Ŀ�ʯ)�Ϳ����ˡ�
LONG,
       "����Ŀ�ʯ"  :    "��ν����Ŀ�ʯ����ָ(��������)�",
       "��Ŀ"        :    @LONG
���˲�˵����, ��Ҳ����, ����ϴ�ֲ�����, �������ܸ��һƽ�
��������, �Ҿ��������һ�ѷ�������, ��һ�޶���������
LONG,
       "��������"    :    @LONG
���������ݡ���ָ�ľ���������������, ����ס��ħ���е�����
��������ꡢ���������, ���⻹����һֻ�ж���硢���޶�����
Ϊ�ѵ�һ������ɽ��ӥ��
LONG,
       "��������"    :    @LONG
���������䡯ָ�ľ��Ƕ�������, �߲���ʯ, ��������, ���꺮
��, ��ħ����������
LONG,
   ]));

   set("chat_chance",20);
   set("chat_msg",({
      (: about_weapon :)
   }));
   set("chat_chance_combat",20);
   set("chat_msg_combat",({
      (: in_combat :)
   }));
   setup();

}

void init()
{
   add_action("do_select", "select");
   add_action("do_set_name", "set_name");
   add_action("do_vendor_list", "list");
}

int in_combat()
{
   object weapon, fall= this_object();
// ���˼Ҵ��û����������...
   if( !present("m_weapon", this_object()))
   {
      init_weapon();
      weapon= new("/obj/m_weapon.c");            //���� wield...

// �����鷳...����ץ���� NPC ���趨....
      reload_weapon( weapon);

      weapon->move( fall);
      command("wield m_weapon");                          //����� wield...
   }

   //�ɽ�
   (: perform_action,"sword.sha_kee" :);
   //��...
   (: perform_action,"blade.gold-dest" :);
   (: perform_action,"blade.fast-dest" :);
   //����...
   (: perform_action,"unarmed.evil-blade" :);
   //�μ�...
   (: perform_action,"stabber.handwriting" :);
   //����...
   (: perform_action,"stabber.movedown" :);
   (: perform_action,"plan.lock-link" :);
   (: perform_action,"plan.ghost" :);
   (: perform_action,"plan.fire" :);
   (: perform_action,"plan.fish" :);
   scholar_finger();                                    //�������Ż�ָ��..

   return 1;
}

int about_weapon()
{
   object weapon, fall= this_object();
   int chance= random( 10);

//��������� m_weapon ����ɾ��....��ʾ�ո����˸������...
   if( weapon= present("m_weapon", this_object()))
      destruct( weapon);

   if( chance == 7)
      command("say ������...����±�����������Ǻè�...");
   if( chance == 8)
      message_vision("�糵:������...����:��һ��...��һ��...��һ��...\n", this_object());
   if( chance == 9)
      message_vision("���ȵ�������ȼ�������ػ���Ĵ��...\n", this_object());

   return 1;
}

int init_weapon()
{
   object fall= this_object();

   switch( random( 10))
   {
      case 0:                                           //�ɽ�
         fall->map_skill("sword", "shasword");
         fall->map_skill("parry", "shasword");
         fall->map_skill("dodge", "sha-steps");
         fall->map_skill("move", "sha-steps");
         fall->map_skill("force", "shaforce");

         fall->set("weapon/type", "sword");
         fall->set("weapon/e_type", "sword");
         fall->set("weapon/c_type", "��");
         fall->set("weapon/name", "���¾Ž�");
         break;
      case 1:                                           //����
         fall->map_skill("dagger", "dragon-dagger");
         fall->map_skill("parry", "dragon-dagger");
         fall->map_skill("dodge", "chen-steps");
         fall->map_skill("move", "chen-steps");
         fall->map_skill("force", "oneforce");

         fall->set("weapon/type", "dagger");
         fall->set("weapon/e_type", "dagger");
         fall->set("weapon/c_type", "ذ��");
         fall->set("weapon/name", "��Ѫذ");
         break;
      case 2:                                           //��
         fall->map_skill("blade", "fast-blade");
         fall->map_skill("parry", "gold-blade");
         fall->map_skill("dodge", "fly-steps");
         fall->map_skill("move", "fly-steps");
         fall->map_skill("force", "sixforce");

         fall->set("weapon/type", "blade");
         fall->set("weapon/e_type", "blade");
         fall->set("weapon/c_type", "��");
         fall->set("weapon/name", "��ɽ��");
         break;
      case 3:                                           //�μ�
         fall->map_skill("unarmed", "six-fingers");
         fall->map_skill("stabber", "six-fingers");
         fall->map_skill("parry", "six-fingers");
         fall->map_skill("dodge", "linpo-steps");
         fall->map_skill("move", "linpo-steps");
         fall->map_skill("force", "sunforce");

         fall->set("weapon/type", "stabber");
         fall->set("weapon/e_type", "fan");
         fall->set("weapon/c_type", "��");
         fall->set("weapon/name", "�����");
         break;
      case 4:                                           //����
         fall->map_skill("unarmed", "badstrike");
         fall->map_skill("parry", "badstrike");
         fall->map_skill("dodge", "ghost-steps");
         fall->map_skill("move", "ghost-steps");
         fall->map_skill("force", "badforce");

         fall->set("weapon/type", "unarmed");
         fall->set("weapon/e_type", "ring");
         fall->set("weapon/c_type", "ָ��");
         fall->set("weapon/name", "������");
         break;
      case 5:                                           //ѩ��
         fall->map_skill("unarmed", "snow-martial");
         fall->map_skill("dodge", "black-steps");
         fall->map_skill("move", "black-steps");
         fall->map_skill("force", "snowforce");

         fall->set("weapon/type", "unarmed");
         fall->set("weapon/e_type", "armband");
         fall->set("weapon/c_type", "�ۻ�");
         fall->set("weapon/name", "����Բ��");
         break;
      case 6:                                           //¤ɽ
         fall->map_skill("unarmed", "lungshan");
         fall->map_skill("dodge", "henma-steps");
         fall->map_skill("move", "henma-steps");
         fall->map_skill("force", "haoforce");

         fall->set("weapon/type", "unarmed");
         fall->set("weapon/e_type", "armband");
         fall->set("weapon/c_type", "�ۻ�");
         fall->set("weapon/name", "�����Ļ�Ȧ");
         break;
      case 7:                                           //����
      case 8:
      case 9:
         fall->set("weapon/type", "stabber");
         fall->set("weapon/e_type", "pen");
         fall->set("weapon/c_type", "��");
         fall->set("weapon/name", "С����ר�ñ�");

         break;
   }
   fall->set("weapon/source1", "����");                 //ccc...
   fall->set("weapon/source2", "����");                 //hoho...
   fall->set("weapon/value", 100);

   return 1;
}

int scholar_finger()
{
   object me= this_object();
   object corpse, target, *enemy= me->query_enemy();
   string weakest;
   int i, enemy_num= sizeof( enemy);
   int gin, kee, sen;

   int literate, force_lv;
   for( i= 0; i< enemy_num; i++)
   {
      target= enemy[ i];
      gin= target->query("gin");
      kee= target->query("kee");
      sen= target->query("sen");

      literate= target->query_skill("literate");
      force_lv= target->query_skill("force");

      if( gin < kee && gin < sen)
         weakest= "gin";
      if( kee < gin && kee < sen)
         weakest= "kee";
      if( sen < gin && sen < kee)
         weakest= "sen";

      message_vision(@LONG
[1;37m$N˫��һ��, ���������д�, ͻȻĿ�⾫������, ��$n���ϵ�ɨ����
                ʩչ������ʧ���Ѿö�������֮

[5;32m������������������������������������������������������������������
��������������������������[1;37m��[1;31m���Ż�ָ[1;37m��[5;32m����������������������������
������������������������������������������������������������������[0m
LONG, me, target);

      if( random( literate+ force_lv) < 150)
      {
         message_vision(@LONG
[1;34m����ǧ��һ�������һ��, $N�߲�����, ��ʹ���Ż�ָ��ƫ��,
����·�Կ�Ϸ��·�˼� + ·���� & ·�˱�....
LONG, me, target);

         corpse= new("/obj/corpse");
         corpse->move( environment( target));
      }
      else
      {
         message_vision("
[1;31mֻ��$Nȫ���ƺ������˻��Ƶ�, ����ȼ��������ĸ���,
\n
���е�"+ me->query("weapon/name")+ "�������, ���ж�������$n�������Ѩ...[0m
\n
", me, target);
         message_vision("\n[1;37m����$n�Ѿ��ܵ����صĴ���, �Ѿ���Ҫ�����ˡ�\n[0m", me, target);
      }

      target->add( weakest, -me->query_skill("stabber")/ 2);
   }
   return 1;
}

object reload_weapon( object weapon)
{
   object fall= this_object();
   string c_unit, wield_part, weapon_type= fall->query("weapon/e_type");

   if( weapon_type == "whip")
   {
      c_unit= "��";
      wield_part= "����";
   }
   else if( weapon_type == "pen")
   {
      c_unit= "ֻ";
      wield_part= "����";
   }
   else if( weapon_type == "ring")
   {
      c_unit= "ֻ";
      wield_part= "ָ��";
   }
   else if( weapon_type == "armband")
   {
      c_unit= "��";
      wield_part= "����";
   }
   else                                      // ʣ�µ�Ϊ �� �� ذ�� ���� ��
   {
      c_unit= "��";
      wield_part= "����";
   }

   weapon->set_name( fall->query("weapon/name"),({"special "+ fall->query("weapon/e_type"), fall->query("weapon/e_type"), "m_weapon"}) );
   weapon->init_sword( fall->query("weapon/value"));
   weapon->set("skill_type", fall->query("weapon/type"));
   if( fall->query("weapon/type") == "stabber" || fall->query("weapon/type") == "unarmed")
   {
      weapon->set("wield_msg", HIW"ֻ��$N���һ��, һ���׹�Ѹ����$N���дܳ�, \n�ڿ����̻���Ȧ��ͣ��$N��"+wield_part+"����һ"+c_unit+"���ص�"+ fall->query("weapon/name")+"��\n"NOR);
weapon->set("unwield_msg", HIW"ͻȻ��$N���ظ�֮����������, ��"+wield_part+"��$n����һ��, ֻ��$n�����Ļ���һ����â��û��$N���ظ�֮�䡣\n"NOR);
   }
   else // if( c_unit == "��" || c_unit == "��")// ָ �� �� ذ�� ����...���Ӳ������
   {
      weapon->set("wield_msg", HIW"$N����Ľ�"+ fall->query("weapon/name")+"�ɱ�����, ֻ��һ��ҫ�۶�����Ĺ�âע����$N���ϡ�\n"NOR);
      weapon->set("unwield_msg", HIW"$N�����е�$n����������һ��, ֻ�������������˱���\n"NOR);
   }
   return weapon;
}

int accept_fight( object ob)
{
   object weapon, fall= this_object();
   command("say ������...̫����, �Ϸ�����û�������������´���ı�����...");
   command("say ���Ϸ����������������а�...С����...");

   init_weapon();

   weapon= new("/u/a/acelan/weapon/m_weapon.c");       //���� wield...

// �����鷳...����ץ���� NPC ���趨....
   weapon= reload_weapon( weapon);

   weapon->move( fall);
   command("wield m_weapon");                     //����� wield...
   return 1;
}

int accept_kill(object ob)
{
   object fall= this_object();
   object weapon;
   command("say ��ɱ��...ֻ���㻹û�������...");

   init_weapon();

   fall->set("weapon/value", 200);                      //͵͵����һ��...
   fall->set("force_factor", 50);

   weapon= new("/u/a/acelan/weapon/m_weapon.c");       //���� wield...

// �����鷳...����ץ���� NPC ���趨....
   reload_weapon( weapon);

   weapon->move( fall);
   command("wield m_weapon");                     //����� wield...
   return 1;
}

string make_weapon()
{
   object me= this_player();
   if( present( "m_weapon", me) )
      return("�Ϸ�ֻ������һ������, �Ϸ��Ѿ�����������, ����ذɡ�");
   me->set_temp("accept_obj", 1);
   return (@LONG
�Ϸ򲻰�����������Ѿ��ܾ���, ���������ó������ѵ�һ��
��(����), ��һ��Ϊ���ɹ۵�(��Ŀ), ������̸��
LONG);
}

int do_set_name( string arg)
{
   object weapon;
   object me= this_player();
// �ж��Ƿ���������...
   if( me->query_temp("allow_name") != 1)
   {
      command("? "+ me->query("id"));
      command("say ��Ҫ�����.....");
      return 1;
   }
// �Ƿ��мӲ���...
   if( !arg)
   {
      command("say Ϊ���"+ me->query_temp("weapon_type")+"��������ô������? ���������ɡ�");
      return 1;
   }
// ��һЩ�趨д�� data
   arg = trans_color(arg);
   me->set("weapon/name", arg+NOR);
   me->set("weapon/source1", me->query_temp("weapon_source1"));
   me->set("weapon/source2", me->query_temp("weapon_source2"));
   me->set("weapon/c_type", me->query_temp("weapon_type"));


   switch( me->query_temp("weapon_type"))
   {
      case "��":
      {
         me->set("weapon/type", "sword");
         me->set("weapon/e_type", "sword");
         me->set("weapon/c_type", "��");
         break;
      }
      case "��":
      {
         me->set("weapon/type", "blade");
         me->set("weapon/e_type", "blade");
         me->set("weapon/c_type", "��");
         break;
      }
      case "��":
      {
         me->set("weapon/type", "stabber");
         me->set("weapon/e_type", "fan");
         me->set("weapon/c_type", "��");
         break;
      }
      case "��":
      {
         me->set("weapon/type", "stabber");
         me->set("weapon/e_type", "pen");
         me->set("weapon/c_type", "��");
         break;
      }
      case "ָ��":
      {
         me->set("weapon/type", "unarmed");
         me->set("weapon/e_type", "ring");
         me->set("weapon/c_type", "ָ��");
         break;
      }
      case "��":
      {  
         me->set("weapon/type", "whip");
         me->set("weapon/e_type", "whip");
         me->set("weapon/c_type", "��");
         break;
      }
      case "����":
      {  
         me->set("weapon/type", "whip");
         me->set("weapon/e_type", "whip");
         me->set("weapon/c_type", "����");
         break;
      }
      case "ذ��":
      {
         me->set("weapon/type", "dagger");
         me->set("weapon/e_type", "dagger");
         me->set("weapon/c_type", "ذ��");
         break;
      }
      case "��":
      {
         me->set("weapon/type", "archery");
         me->set("weapon/e_type", "bow");
         me->set("weapon/c_type", "��");
         break;
      }
   }

   new("/obj/m_weapon.c")->move( me);
   command("say ����, ���"+ me->query_temp("weapon_type")+ "�Ѿ����������, �����°ɡ�");
   message_vision("��ʤ�������һ��"+ arg+ "\n", me);
// ������ temp ɾ��...
   me->delete_temp("give_money");
   me->delete_temp("allow_name");
   me->delete_temp("weapon_source1");
   me->delete_temp("weapon_source2");
   me->delete_temp("weapon_type");
   me->delete_temp("allow_select");
   me->delete_temp("accept_obj");
   return 1;
}

int do_select( string arg)
{
   object me= this_player();
// ����Ƿ�����ѡ�� ������̬
   if( !me->query_temp("allow_select") )
   {
      command("? "+ this_player()->query("id"));
      command("say ѡʲô...˭˵Ҫ����ѡ��...");
      return 1;
   }
// û�Ӳ���...
   if( !arg)
   {
      command("say �Ϸ������������� �� �� �� �� �� ָ�� �� ���� �� ذ��");
      command("say ��ѡ��(select)��...");
      return 1;
   }
// �Ƿ����趨��̬��
   if( arg != "��" && arg != "��" && arg != "��" && arg != "��" && arg != "ָ��" && arg != "��" && arg != "����" && arg != "ذ��" && arg != "��")
   {
      command("say �ܱ�Ǹ, �Ϸ���������, ����������������...");
      command("say ������ѡ��...");
      return 1;
   }

// ................
   me->set_temp("weapon_type", arg);
   command("say Ҫ��"+ arg+"�ǰ�! ��, û����...");

   message_vision("ֻ������ʤ���ں�Ժ����¯�����ô�������, \n���þͼ����ó���һ���������ǵ�"+ arg+ "������\n", me);
   command("say ����...����һ�Ѻ�"+ arg+".....��");
   command("say ��Ϊ���"+ arg+ "����(set_name)�ɡ�");
   me->set_temp("allow_name", 1);

   return 1;
}

int accept_object(object me, object obj)
{
   string obj_name= obj->query("name");
   string weapon_type= me->query_temp("weapon_type");
// ���ж��Ƿ��Ѿ��ʹ�Ҫ �������� ��
   if( me->query_temp("accept_obj"))
   {
// �ж��Ƿ���������
      if( obj_name == "���Ѫ��" || obj_name == HIY"ħ����"NOR)
      {
         command("pat "+getuid(me));
         command("say ̫����, �����ϼѵ�"+ obj_name+ "��");
// �ǵĻ��趨 temp weapon_source1, destruct( obj)...
         me->set_temp("weapon_source1", obj_name);
         destruct(obj);
// �ж��Ƿ��и�������, ������ return...
         if( !me->query_temp("weapon_source2"))
         {
            command("say �콫���������䡯�ø���, �����Ұ����������...");
            return 1;
         }
// �Ѹ��� ���� ���� �ж��Ƿ��и�Ǯ...
         if( !me->query_temp("give_money"))
         {
            command("say ����.........���ȸ���........");
            return 1;
         }
// �Ѹ��� ���� ���� & Ǯ......Ҫ��ѡ��������̬ set_temp("allow_select", 1)
         command("say ��ѡ��(select)��Ҫ��������̬��");
         me->set_temp("allow_select", 1);
         return 1;
      }

// �ж��Ƿ���������
      if( obj_name == "��������" || obj_name == "��������")
      {
         command("pat "+getuid(me));
         command("say ̫����, �����ϼѵ�"+ obj_name+ "��");
// �ǵĻ��趨 temp weapon_source2, desturct( obj)...
         me->set_temp("weapon_source2", obj_name);
         destruct(obj);
// �ж��Ƿ��и�������, ������ return...
         if( !me->query_temp("weapon_source1"))
         {
            command("say �콫���������䡯�ø���, �����Ұ����������...");
            return 1;
         }
// �Ѹ��� ���� ���� �ж��Ƿ��и�Ǯ...
         if( !me->query_temp("give_money"))
         {
            command("say ����.........���ȸ���........");
            return 1;
         }
// �Ѹ��� ���� ���� & Ǯ......Ҫ��ѡ��������̬ set_temp("allow_select", 1)
         command("say ��ѡ��(select)��Ҫ��������̬��");
         me->set_temp("allow_select", 1);
         return 1;
      }

// �ж��Ƿ��Ǯ...
      if( obj_name == "�ƽ�")
      {
// �ж��Ƿ񳬹��ٽ�
         if( obj->value() < 1000000)
         {
            command("? "+ getuid(me));
            command("say ��Ŀ�����е㲻��Ŷ..., �����ٽ�֮������...");
            command("say �ƽ���Ŀֻ��"+ obj->value()/10000);
            obj->move( me);
            message_vision("��ʤ�ｫ"+ obj->query("name")+ "������$N��\n", me);
            return 0;
         }
// �����ٽ�...set_temp("give_money", 1), set("weapon/value", gold/5)
         message_vision("ֻ����ʤ�ｫ�ƽ�������ҧ��һҧ��\n", me);
         command("say ��, ���Ȼ����Ļƽ�...");
         me->set_temp("give_money", 1);
// ���� 500 gold
         if( obj->value()/ 10000 > 500)
            me->set("weapon/value", 100);
         else
            me->set("weapon/value", obj->value()/50000);

         destruct(obj);

// ����Ƿ��и��� ����
         if( !me->query_temp("weapon_source1"))
         {
            command("say �콫���������ݡ�������, �����Ϸ�Ͽ춯����");
            return 1;
         }
// ����Ƿ��и��� ����
         if( !me->query_temp("weapon_source2"))
         {
            command("say �콫���������䡯������, �����Ϸ�Ͽ춯����");
            return 1;
         }
// �Ѹ��� ���� ���� & Ǯ......Ҫ��ѡ��������̬ set_temp("allow_select", 1)
         command("say ��ѡ��(select)��Ҫ��������̬��");
         me->set_temp("allow_select", 1);
         return 1;
      }
   }
// ��δ�ʹ� ��������
   else
   {
      command("? "+getuid(me));
      command("say �������ֶ�������...");
      obj->move( me);
      message_vision("��ʤ�ｫ"+ obj->query("name")+ "������$N��\n", me);
      return 1;
   }
}
