//��� by Neverend 2001/09/28
//�ж������Ĳ��ʺͷ�����
#include <combat.h> 
#include <ansi.h>

void weapon_material(object me,object target)
{
	string wo,oo,wn,on;
	int wm,om,ws,os,wd,od,qq;

	object ob=target->query_temp("weapon");
	object weapon=me->query_temp("weapon");

	if( !weapon || !ob )
	return;
//���δ�������ʺͷ����ȣ����������������Զ�δ������
//״̬�£������ĳ�ʼֵ������300 ��ֵ�����ܹ�����õ�
//�������ǿ���ֱ�ӿ��϶Է���������

	if( !weapon->query("material") )
	weapon->set("material","iron");
	if( !ob->query("material") )
	ob->set("material","iron");
	if( !weapon->query("sharp") )
	weapon->set("sharp",6);
	if( !ob->query("sharp") )
	ob->set("sharp",6);
//����ȡ��ԭ��������
	if( !weapon->query("bname") )
	{
	wn = weapon->query("name");
	weapon->set("bname",wn);
	}
	if( !ob->query("bname") )
	{
	on = ob->query("name");
	ob->set("bname",on);
	}
//�����������Ĳ���    
	wo = weapon->query("material");
	oo = ob->query("material");
//�����������ķ�����
	ws = weapon->query("sharp");
	os = ob->query("sharp");

	switch(wo)
	{
	case "crimsonsteel": wm=100;  break;
	case "blacksteel":   wm=90;   break;
	case "gem":          wm=80;   break;
	case "gold":         wm=70;   break;
	case "silver":       wm=60;   break;
	case "steel":        wm=50;   break;
	case "copper":       wm=40;   break;
	case "iron":         wm=30;   break;
	case "wood":         wm=25;   break;
	case "bone":         wm=20;   break;
	case "leather":      wm=15;   break;
	case "fur":          wm=10;   break;
	case "cloth":        wm=5;    break;
	default:             wm=1;    break;
	}

	switch(oo)
	{
	case "crimsonsteel": om=100;  break;
	case "blacksteel":   om=90;   break;
	case "gem":          om=80;   break;
	case "gold":         om=70;   break;
	case "silver":       om=60;   break;
	case "steel":        om=50;   break;
	case "copper":       om=40;   break;
	case "iron":         om=30;   break;
	case "wood":         om=25;   break;
	case "bone":         om=20;   break;
	case "leather":      om=15;   break;
	case "fur":          om=10;   break;
	case "cloth":        om=5;    break;
	default:             om=1;    break;
	}
//�����ĵȼ���(����)*(������)������
	wd = wm * ws;
	if( wd > 1000 ) wd=1000;
	od = om * os;
	if( od > 1000 ) od=1000;
	qq = random( wd-od );

//ǿ���趨ֻҪ������850����ֱ�ӿ��϶Է�����������������1/2����
	if( random(10) > 5 && (wd - od > 850) )
	{
	message_vision(HIC"$N��"NOR+weapon->name()+HIC"��ৡ���һ������$n"HIC"��"NOR+ob->name()+HIC"��������!!\n"NOR,me,target);
	ob->unequip();
	ob->move(environment(target));
	ob->set("name", "(�ϻ�����)" + ob->query("name"));
	ob->set("value", 1);
	ob->set("weapon_prop/damage",0);
	target->reset_action();
	}else{
//�������Χ�ڣ���Ϊ�����ȼ�����������Ի��нϴ�Ļ����˺��Է�����
//������󣬶Է��������л������� (0.67 - 0.3 )֮��
	  if( qq > 280 && (wd-od < 850 && wd-od > 400) )
	  {
	  ob->unequip();
	  message_vision(HIR"$N��"NOR+weapon->name()+HIR"��$n"HIR"��"NOR+ob->name()+HIR"���صĿ�����һ�����ص�ȱ��!!\n"NOR,me,target);
//	  message_vision("$N"+wd+"��$n"+od+"��\n",me,target);
	  ob->add("bad",2);
	    if( ob->query("bad") >= 11 )
	    ob->set("name", "(��������)" + ob->query("bname"));
	    if( ob->query("bad") == 10 )
	    ob->set("name", "(������)" + ob->query("bname"));
	    if( ob->query("bad") == 9 )
	    ob->set("name", "(���Ʋ���)" + ob->query("bname"));
	    if( ob->query("bad") == 8 )
	    ob->set("name", "(����ʹ��)" + ob->query("bname"));
	    if( ob->query("bad") == 7 )
	    ob->set("name", "(����ദ)" + ob->query("bname"));
	    if( ob->query("bad") == 6 )
	    ob->set("name", "(�п�ʹ��)" + ob->query("bname"));
	    if( ob->query("bad") == 5 )
	    ob->set("name", "(�ദ�Ѻ�)" + ob->query("bname"));
	    if( ob->query("bad") == 4 )
	    ob->set("name", "(С���Ѻ�)" + ob->query("bname"));
	    if( ob->query("bad") == 3 )
	    ob->set("name", "(��΢�Ѻ�)" + ob->query("bname"));
	    if( ob->query("bad") == 2 )
	    ob->set("name", "(��΢ȱ��)" + ob->query("bname"));
	    if( ob->query("bad") == 1 )
	    ob->set("name", "(��΢����)" + ob->query("bname"));
	    if( ob->query("weapon_prop/damage") > 10 || ob->query("bad") < 12 )
	    {
	    ob->add("weapon_prop/damage",-10);
	    ob->wield();
	    }else{
	      message_vision(RED"$n"RED"��"+ob->name()+RED"��Ҳ���ܲ�ס������ȫ�ϻ���!!\n"NOR,me,target);
	    ob->move(environment(target));
	    ob->set("name", "(��ȫ�ϻ�)" + ob->query("bname"));
	    ob->set("value", 1);
	    ob->set("weapon_prop/damage",0);
	    target->reset_action();
	    }
	  }else{
//�����ȼ�����С������Ȼ���˺��Է�������
//������󣬶Է��������л������� (0.625 - 0.25)֮��
	    if( qq > 150 && (wd-od < 400 && wd-od > 200) )
	    {
	    ob->unequip();
	    message_vision(HIY"$N"HIY"��"NOR+weapon->name()+HIY"��$n"HIY"��"NOR+ob->name()+HIY"����Ŀ�����һ��Сȱ��!!\n"NOR,me,target);
	    ob->add("bad",1);
	      if( ob->query("bad") >= 11 )
	      ob->set("name", "(��������)" + ob->query("bname"));
	      if( ob->query("bad") == 10 )
	      ob->set("name", "(������)" + ob->query("bname"));
	      if( ob->query("bad") == 9 )
	      ob->set("name", "(���Ʋ���)" + ob->query("bname"));
	      if( ob->query("bad") == 8 )
	      ob->set("name", "(����ʹ��)" + ob->query("bname"));
	      if( ob->query("bad") == 7 )
	      ob->set("name", "(����ദ)" + ob->query("bname"));
	      if( ob->query("bad") == 6 )
	      ob->set("name", "(�п�ʹ��)" + ob->query("bname"));
	      if( ob->query("bad") == 5 )
	      ob->set("name", "(�ദ�Ѻ�)" + ob->query("bname"));
	      if( ob->query("bad") == 4 )
	      ob->set("name", "(С���Ѻ�)" + ob->query("bname"));
	      if( ob->query("bad") == 3 )
	      ob->set("name", "(��΢�Ѻ�)" + ob->query("bname"));
	      if( ob->query("bad") == 2 )
	      ob->set("name", "(��΢ȱ��)" + ob->query("bname"));
	      if( ob->query("bad") == 1 )
	      ob->set("name", "(��΢����)" + ob->query("bname"));
	      if( ob->query("weapon_prop/damage") > 5 || ob->query("bad") < 12 )
	      {
	      ob->add("weapon_prop/damage",-5);
	      ob->wield();
	      }else{
	      message_vision(RED"$n"RED"��"+ob->name()+RED"��Ҳ���ܲ�ס�������Ѷϻ���!!\n"NOR,me,target);
	      ob->move(environment(target));
	      ob->set("name", "(���Ѷϻ�)" + ob->query("bname"));
	      ob->set("value", 1);
	      ob->set("weapon_prop/damage",0);
	      target->reset_action();
	      }
	    }else{
//���������ȼ��൱�����Բ������˺��Է�����
	      if( qq > 75 && (wd-od < 200 && wd-od > 100) )
	      {
	      message_vision(HIG"$n"HIG"ֻ��������"NOR+ob->name()+HIG"��"NOR+weapon->name()+HIG"һ����Щ���ַɳ�!!\n"NOR,me,target);
		  }else{
		    if( qq > 25 && (wd-od < 100 && wd-od > 50) )
		    {
	        message_vision(HIW"$N"HIW"��"NOR+weapon->name()+HIW"��$n"HIW"��"NOR+ob->name()+HIW"�����ð�����Ļ��ǡ�\n"NOR,me,target);
	        }else{
	          if( random(10) > 5 && (wd == od) )
	          {
	          message_vision(HIM"$N"HIM"��"NOR+weapon->name()+HIM"��$n"HIM"��"NOR+ob->name()+HIM"�����������������������\n"NOR,me,target);
	          }
	        }
	      }
	    }
	  }
	}
}
