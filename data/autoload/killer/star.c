//1998.12.15 by wataru
//�����д����һ�������͵�������˵����Ҳ�֪���ö�λ������
//ԭ������һ���ƻ�Ҫ����һ���͵������������������Ǹ�minimum̸�۹���ȥ��		
//��һӦ������������������͵�����������
//Ŀǰд���ǵȼ� ����400���Լ�һ�������һ�δ�Լ���Լ�50��
//���ң�������������Ҫ�з���ˮ��ⰵ
//���ǣ���ʵ��ǣ�浽������Ƚϴ󣬲�������
//����Ƿֳ������������絶�������ʣ�������������������
//���ǣ���һ�������Ķ�λ���ģ���Ҳ�������
//���ÿ�����ɶ���һ�����ֳ�ǿ�����Ļ����Ƿ����FS����ɫ֮һ��
//����˵��������ɫ��ʧ����Ϊ��һ���������浫û��ɫ��
//������һ�㣬������������ϸ������Ȥ�Ķ���
//�����߶�����ϵ�е�ħ�������Ǹ��ȼ��йػ����
//����˵��ħ��д�������ϣ���������һ���ȼ���������Щħ��������
//���ϵ��ħ�����ǻظ�ϵ������ϵ���ȼ���ͬ�����õ�ħ��Ҳ��ͬ
//��ϵ��ħ�����Ǿ����˺�ϵ��ħ��
//���˵�����ϵ��ˮϵ����ȥ���ͻ������л���ħ��
//������һ�������Ķ�λ�ͳ��������ˣ��Ǿ��Ǹ�˭�ã��ⲻһ����ذ�ף�
//��ħ��ϵ�������������Լ������ˣ���ʵ��������Ҫ
//����ħ��ϵ����������ɫ���ϣ�����ħ�������ɲ���ƽ
#include <ansi.h>
#include <weapon.h>
#include <armor.h>
#include "/open/open.h"
inherit UNARMED;
object user;
void create()
{
   seteuid(getuid());
   set_name("������",({ "star unarmed","star"}) );
   set_weight(2000);
   if( clonep() )
         set_default_object(__FILE__);
   else 
   {
     set("long",@LONG
     ���Ǵ�˵�У����������˵�������ʽ��ͬ�����ɳ���������ע��ⰵ���������
     ����������Զ����µ������ϸ�������help star
     ����(discipline)        ��ʽ discipline             ������������ʹ��ϵ�����ɳ�
     ����(absorb)     	  ��ʽ absorb <target>    �����նԷ�ʹ����ϵ�����ɳ�
     ����(rename)   	  ��ʽ rename <name>   ��Ϊ�����Ƹ���
     ����(star_data)         ��ʽ star_data              ���쿴������Ŀǰ��ˮ׼
LONG);
     set("unit","��");
     set("value",100);
     set("material", "steel");
     set("ski_type","unarmed");
     set("no_sell",1);
//   set("no_drop",1);
     set("no_auc",1);
   }
   init_unarmed(1);
   set("wield_msg", HIG"$Nװ����$n������ǹ���$n��ҫ�š�\n"NOR);
   set("unwield_msg", HIG"$N����$n��$nҲ����ʧȥ��â��\n"NOR);
   //����ԭ�еĹ�����
       if (this_player()->query("dag/sun/lv") > 2)
   	  this_object()->set("weapon_prop/damage",this_player()->query("dag/sun/at"));
       else
    	  this_object()->set("weapon_prop/damage",this_player()->query("dag/dark/at"));
   setup();
}

void init()
{
   if( this_player()==environment() )
   {
    if(this_player()->query("id") == "reko"  || this_player()->query("id") =="wataru"
       || this_player()->query("id") == "meme")
    {
       add_action("feed_dag","discipline");
       add_action("target_absorb","absorb");
       add_action("rename_dag","rename");
       add_action("verify_pet","star_data");
       add_action("help_dream","help");
    }
   }
   user=this_player();
}

int feed_dag(string arg)
{
   object obj,me=this_player();
   int limit_force,daglv;
   int expm;

   if(arg)  return notify_fail("ָ���ʽ: discipline \n");
//Ϊ�˱���ǿ�߳�����������ÿ����5%����
//����������,max_force 1000��5%��50
   limit_force=me->query("max_force")/100;
   limit_force= limit_force *5;
   if (limit_force < 50)
	return notify_fail("�����������������������������ϵ������\n");
   if(me->query("force") < limit_force)
	return notify_fail("����ġ�������������������\n");
//�����һ��������һ����֮���ʱ���֮��������1 min
//���֮ǰ��û������qktime�����㣬��Ȼ��������һ��
   if ((me->query("mud_age") - this_object()->query("qktime")) < 60)
	return notify_fail("����ġ�����������ʱ��������֮ǰ�����������\n");
   this_object()->set("qktime",me->query("mud_age"));

   message_vision(HIG"$N������ԴԴ���ϵ�����"+this_object()->name()+"֮�С�\n"NOR,me);
   me->add("force",-limit_force);

//�����Ǽ���Ƿ��һ�ζ�����һ������
//û�еĻ�����Ϊ�������һ�ε������趨
   if (!me->query("dag/sun/lv"))
   { 
      me->set("dag/sun/power",1); 
      me->set("dag/sun/lv",1);
      me->set("dag/sun/at",1);
   }    
//����Խ�ߣ�һ�ο��������ͽ϶�
   expm=random(limit_force)/5;
   me->add("dag/sun/power",expm);
//����Ŀǰ�Ĺ�ϵ����
//Ŀǰ��ʱ�����ǣ����밵֮�����������
   expm=me->query("dag/sun/power");
   daglv=me->query("dag/sun/lv");
   if (expm >= (daglv * 400))  //����
   {
    daglv += 1;
     if (daglv > 200)
       daglv=200;
     if ( me->query("dag/dark/lv") > 1)
     {//��Ϊ�ⰵ��ˣ����������ȼ��½��ҵ���������
	me->add("dag/dark/lv",-1);
	me->set("dag/dark/at",(me->query("dag/dark/lv")/2)+1);
     }
     message_vision(HIC"$N���е�"+this_object()->name()+"������ʥ�Ĺ�ԡ�\n"+
		"������������һ��¥��\n"NOR,user);
     me->set("dag/sun/lv",daglv);
     me->set("dag/sun/at",(daglv/2)+1);
     me->set("dag/sun/power",1);
     this_object()->delete("weapon_prop/damage");
     this_object()->set("weapon_prop/damage",this_player()->query("dag/sun/at"));
// ��Ϊscore������ץ����me->query_temp("apply/damage");
// ���Թ���������Ҫ������ҲҪ����

// me->add("max_force",-5"); �������������

     expm=0;
   }
   this_object()->set("sunlv",me->query("dag/sun/lv"));
   this_object()->set("sun",me->query("dag/sun/power"));
   return 1;
}

int target_absorb(string str)
{
	object ob,me=this_player();
	int i, exp1 , exp2,upexp,expm;
	int daglv;

//	if(!this_player()->query("quests/lotch") )
//		return notify_fail("�㻹����ʹ�������� !\n");
	if(!str)
		return notify_fail("��Ҫ����ʲô ?\n");
	if( (int)this_player()->query("bellicosity")< 5)
		return notify_fail("��û���㹻ɱ�������ն���\n");
	str=lower_case(str);
	if(!objectp(ob=present(str,environment(this_player()))))
		return notify_fail("û�������� !\n");
	if(userp(ob))
		return notify_fail("������ , �� player ҲҪץ ?\n");
        if(!ob->is_character())
        	return notify_fail("û���������Ķ������޷���ǿ��ϵ����!!\n");
	
	if( (int) ob->query("max_kee")/5 < (int) ob->query("kee"))
	{
		this_player()->start_busy(1);
		return notify_fail("������Ȼ��������ʢ , ���޻��ɳ� !\n");
	}
	message_vision(HIM"$N����$n,ɱ��������$n���ó����� \n"NOR,this_player(),this_object());
	exp1= (int)ob->query("combat_exp");
	//̫��С������������
	if ( exp1 < 50000)
        {
		message_vision(HIR"$N̫��С����������ǿ��ϵ����\n"NOR,ob);
		return 1;
	}
	exp2=(int)this_player()->query("combat_exp");
	if( random(exp2) > random(exp1)/2 )
	{
	   message_vision(HIM"����ɹ��İ�$N����\n"NOR,ob);
	//�����Ǽ���Ƿ��һ�ζ�����һ������
	//û�еĻ�����Ϊ�������һ�ε������趨
	   if (!me->query("dag/dark/lv"))
	   { 
	      me->set("dag/dark/power",1); 
	      me->set("dag/dark/lv",1);
	      me->set("dag/dark/at",1);
	   }    
	//����ǿ�������۸����Լ�̫��ģ����������ɻ��Լ300��
	   if ( exp2 > exp1*2)
		upexp=1;
	   else
		upexp=2;
	//����Խǿ��һ�ο��������ͽ϶�
	   expm=exp1 /20000;
	   expm=random(expm)* upexp;
	   me->add("dag/dark/power",expm);
	//����Ŀǰ�İ�ϵ����
	   expm=me->query("dag/dark/power");
	   daglv=me->query("dag/dark/lv");
	   if (expm >= (daglv * 400))  //����
	   {
	    	daglv += 1;
	     	if (daglv > 200)
		       daglv=200;
		me->set("dag/dark/lv",daglv);
		if ( me->query("dag/sun/lv") > 1)
		{//��Ϊ�ⰵ��ˣ����������ȼ��½��ҵ���������
			me->add("dag/sun/lv",-1);
			me->set("dag/sun/at",(me->query("dag/sun/lv")/2)+1);
                }
		me->set("dag/dark/at",(daglv/2) +1);
		me->set("dag/dark/power",1);
                message_vision(HIM"$N���е�"+this_object()->name()+"������ɫ�Ĺ�ԡ�\n"+
		"������������һ��¥��\n"NOR,user);
	        this_object()->delete("weapon_prop/damage");
                this_object()->set("weapon_prop/damage",this_player()->query("dag/dark/at"));
		// me->add("max_force",-5");
    	        expm=0;
	   }
	   this_object()->set("darklv",me->query("dag/dark/lv"));
	   this_object()->set("dark",me->query("dag/dark/power")); 
	   destruct(ob);
	   this_player()->add("bellicosity",-5);
	   return 1;
	}
	message_vision(HIB"���$N��ǧ��һ��֮�� , ���˿�ȥ\n"NOR,ob);
	this_player()->add("bellicosity",-1);
	return 1;      
}

int rename_dag(string arg)
{
   if(!arg) return notify_fail("����Ϊ������ȡʲô������?\n");
   arg = trans_color(arg);
   this_object()->set_name(arg + NOR,({ "star unarmed","star"}) );
   write("���������ȡ�˸����ֽ�"+this_object()->name()+"��\n");
   return 1;
}

int verify_pet(string str)
{
  int slv,dlv,sun,dark,sunAT,darkAT;
  object obj=this_object();

  slv   =  (int)obj->query("sunlv");
  dlv   =  (int)obj->query("darklv");
  sun   =  (int)obj->query("sun");
  dark  =  (int)obj->query("dark");
  sunAT =  (int)this_player()->query("dag/sun/at");
  darkAT=  (int)this_player()->query("dag/dark/at");
  write(obj->name()+"      Ŀǰ��ϵ�ȼ�   :  "+slv+"\n\n");
  write(obj->name()+"      Ŀǰ��ϵ����   :  "+sun+"\n\n");
  write(obj->name()+"      Ŀǰ��ϵ������ :  "+sunAT+"\n\n");
  write(obj->name()+"      Ŀǰ��ϵ�ȼ�   :  "+dlv+"\n\n");
  write(obj->name()+"      Ŀǰ��ϵ����   :  "+dark+"\n\n");
  write(obj->name()+"      Ŀǰ��ϵ������ :  "+darkAT+"\n\n");
  return 1;
}

mixed hit_ob( object me,object victim)
{
  object *enemy,who;
  int doglv,i,sunlv,darklv;
  int sp=1; //����һ��ʼ���ǹ�֮����

  doglv=user->query_skill("dodge",1);
  sunlv=user->query("dag/sun/lv");
  darklv=user->query("dag/dark/lv");

  if (sunlv < darklv)
	sp=2;	//����������

  if( user->is_fighting() && query("equipped") )
  {
    if( random(100) > 30 )  //ʹ�������ʽ��� 30%
    {
    	enemy=user->query_enemy();
	i=random(sizeof(enemy));
     	switch(sp)
	{//Ϊ����չ�ԣ����绹���Լ����֮������ˮ֮����
	 case 1:
	 {//Ŀǰ�������棬ֻ��һЩѶϢ�벹��
	  //�����ϻ����Ը���ذ�׵ȼ��Ĳ�ͬ���в�һ�����ع�
	  //�������ع������Զ���һ��
	  //�����������϶��������Լ�����Ҫ�õ��ع�ħ��
      		message_vision(HBCYN"����ʥ����,����ס$N!!"NOR,enemy[i]);
		message_vision(HBCYN"ʥ������$N���ϣ��ص�$n������!!"NOR,enemy[i],user);
		enemy[i]->receive_damage("kee",random(sunlv*2),user);
	        COMBAT_D->report_status(enemy[i], 0);
		user->add("kee",random(sunlv/2));
		if (user->query("kee") > user->query("max_kee"))
			user->set("kee",user->query("max_kee"));
		break;
         }
	 case 2:
	 {
      		message_vision(HBMAG"����������Ӱ������$N!!����"NOR,enemy[i]);
		message_vision(HBMAG"$N�ھ���������ܵ��ܴ�Ĵ��!!"NOR,enemy[i]);
		enemy[i]->add("sen",-random(darklv));
		enemy[i]->add("gin",-random(darklv));
	        COMBAT_D->report_status(enemy[i], 0);
		break;
	 }
	} // switch block
   }
   else
      message_vision(HIW"$N����Ķ㿪����\n"NOR,enemy[i]);
  }
}

int help_dream(string str)
{
   if(str != "star")  
         	return notify_fail("�����");
write(@HELP
�����ƣ������������������ķ������ɳ������й�����ڰ���ϵ��������
���������������ݣ����Ե�����һ����������ǿ����һ����������Ȼ�½���
���ԣ����û�����ͬʱ�������������ǲ����ܵġ�
�������ڹ�ϵ���������Իظ�����Ϊ������ϵ�����������˺�����Ϊ����
��ˣ���ϵ���������������������ȥ������
      ��ϵ���������������նԷ����������ɳ����������������

HELP
	);
	return 1;
}

int query_autoload()
{
 return 1;
}

