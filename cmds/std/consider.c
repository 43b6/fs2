// consider.c 
// ��ʵս���� �������ֵ ������ ������ str con �� ɱ��
// �Թ�ʽ�жϵ��� ������ ʵ�����֮���� 
// by Anmy  98/5/28 ����

#include <ansi.h>
inherit F_CLEAN_UP;

void create()
{
        seteuid(getuid());
}
int main(object ob, string str)
{

int range,range1,range2,range3,range4;
int ex1,ex2,ke1,ke2,wc1,wc2,be1,be2;
int at1,at2,st1,st2,co1,co2;
ex2=this_player()->query("combat_exp");
ke2=(int)this_player()->query("max_kee");
wc2=(int)this_player()->query_temp("apply/armor");
at2=(int)this_player()->query_temp("apply/damage");
st2=(int)this_player()->query("str");
co2=(int)this_player()->query("con");
be2=(int)this_player()->query("bellicosity");
range1=(ex2/4+ke2+wc2*2+be2+at2*2+st2+co2);
    if(!str) {
	notify_fail("ʹ�÷��� : <consider [����]>\n");
	return 0;
    }
    ob = present(str,environment(this_player()));
    if(!ob) {
	notify_fail(str+" ��������\n");
	return 0;
    }

    if(ob==this_player()) {
        notify_fail("�Լ����Լ��ȽϵĽ����һ����\n");
//write("�������۾�����Ӧ�Լ�ȫ���״̬, ��ƾ�������Ϊ\n����Ŀǰ���ۺ�����Լ "+HIC+range1+NOR+" ����\n");
        return 0;
    }
ex1=ob->query("combat_exp");
ke1=(int)ob->query("max_kee");
wc1=(int)ob->query_temp("apply/armor");
at1=(int)ob->query_temp("apply/damage");
st1=(int)ob->query("str");
co1=(int)ob->query("con");
be1=(int)ob->query("bellicosity");
range3=((ex1+ex2)/200);
range2= (ex1/4+ke1+wc1*2+be1+at1*2+st1+co1);
if(wizardp(this_player())) printf("range3=%d\n",range3);
if(!range3) range3=1;
if(!range2) range2=1;
range= ((range2/range3)-(range1/range3));
        if(range < - 30) {
         write("��Ҫɱ��"+ob->name()+"����Ҫ�������ϰ�����\n");
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIR"�������"NOR"�ļ���\n");
       return 1;
    }
          if(range < -25) {
      write("�۹�������, "+ob->name()+"����������������Ķ���!\n");
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIR"��ͨ���"NOR"�ļ���\n");
	return 1;
     }
     if (range < -20) {
	write("��о�"+ob->name()+"�����Ǹ������, ������мһ��\n");
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIC"С����"NOR"�ļ���\n");
         return 1;
     }
       if (range < -15) {
write("��Ȼ�Ӹ����濴���㶼��"+ob->name()+"��ʤһ��, ����Ҳ������С�\n");
write("���Ա�����Ϊ�ж�"+ob->name()+"����������Լ��"HIC"��ͨ��ɫ"NOR"�ļ���\n");
      return 1;
     }
    else if(range < -5) {
    write("��о�"+ob->name()+"�����ƾ�����, ��������һ����������\n");
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIY"��������"NOR"�ļ���\n");
       return 1;
    }
      else if(range < 10) {
write("��о�"+ob->name()+"����ǿһ��, �����Ҫ�г�ݵ�׼������ʤ�㡣\n");
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIY"��ͨӲ��"NOR"�ļ���\n");
          return 1;
       }
       else if(range < 20) {
         write("С�ĵ㣬"+ob->name()+"������ʤһ��, ���ʤ�㲻��\n");
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIY"һ�����"NOR"�ļ���\n");
       return 1;
       }
        else if(range < 25) {
        write("С�ĵ㣬"+ob->name()+"���Ǻ�Ӳ���, �û�һ������\n");
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIM"���ָ���"NOR"�ļ���\n");
       return 1;
    }
          else if(range < 30) {
          write("���˰�, Ҫ�� "+ob->name()+" ���ٻ�ȥ����ʮ��\n");
          write(HIC"�㿪ʼ�о���һ��ǿ�����Ϣ����ƽ�\n"NOR);
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIM"��ɲ�"NOR"�ļ���\n");
        return 1;
       }
       else if(range <35) {
          write("ƾ���ʵ�����"+ob->name()+", ��ֱ���������\n");
write(HIY"��о���һ��ʮ��ǿ�����Ϣ�����Ƚ�\n"NOR);
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIW"��ǰ����"NOR"�ļ���\n");
         return 1;
      }
    else {
write("�������� , ֱ��ȥ��ɱҲ����㻹�ȽϿ��, "+ob->name()+"��ʵ����ɲ�!\n");
write(HIY"��о���ʮ�־��˵�������ɱ����"+ob->name()+"����ɢ������\n"NOR);
write("���Ա�����Ϊ�ж�"+ob->name()+"�Ľ���������Լ��"HIW"����������ױ�"NOR+"�ļ���\n");
       return 1;  
    }
}

void help() {
    write("ָ���÷� : <consider [����]>\n\n"+
           "�Ƚ���ͶԷ���ǿ��\n");
}
