// enforce.c
// 10/28�������� by chan
// ������ɽ�ɸ�һ���enforce��ֵ
// ���Ϊenforce 35��������haoforceҪ��300 force lvҪ��200���п���
inherit F_CLEAN_UP;

int main(object me, string arg)
{
 int pts,fval,hval;
 if( !arg || (arg!="none" && !sscanf(arg, "%d", pts)) )
         return notify_fail("ָ���ʽ��enforce <ʹ�����������˵�>|none\n");
 if( !me->query_skill_mapped("force") )
         return notify_fail("������� enable һ���ڹ���\n");
 if( arg=="none" )
         me->delete("force_factor");
 else {
if(me->query("class")!="fighter"&&me->query("class")!="bonze"&&me->query("class")!="doctor"&&!wizardp(me))
           if(pts<0||pts>10)
           return notify_fail("��ֻ���� none ��ʾ������������ 0 �� 10 �����ֱ�ʾ�ü���������\n");
   if(me->query("class")=="fighter"||me->query("class")=="bonze"||me->query("class")=="doctor")
    {
      if((string)me->query("family/family_name")=="��ɽ��")
       {
         fval=me->query_skill("force");
         fval=fval/5;
      if(fval>90)
      fval=90;
        if(pts<0||pts>fval)
           return notify_fail("��ֻ���� none ��ʾ������������ 0 �� "+sprintf("%d",fval)+" �����ֱ�ʾ�ü���������\n");
        }else
       if(pts<0||pts>(10+this_player()->query_skill("force")/25))
           return notify_fail("��ֻ���� none ��ʾ������������ 0 �� "+sprintf("%d",me->query_skill("force")/25+10)+" �����ֱ�ʾ�ü���������\n");
     }
   me->set("force_factor", pts);
        }
        write("Ok.\n");
        return 1;
}

int help (object me)
{
        write(@HELP
ָ���ʽ : enforce <ʹ�����������˵�>|none
ָ��˵�� : 
           ���ָ������ָ��ÿ�λ��е���ʱ��Ҫ�������������˵С�
           enforce none ���ʾ�㲻ʹ�������� 
�����ο� :
           enable��enchant
HELP
        );
        return 1;
}
