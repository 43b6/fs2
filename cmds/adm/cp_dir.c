//������������Ŀ¼�ĵ���ʹ�ã�Ŀǰ����admin����ʹ��,�����������Ҫ������ by bss
inherit F_CLEAN_UP;
void create()
{
        seteuid(getuid());
}
int main(object me, string arg)
{
        string dira,dirb;
        int i;

        if(!arg) return notify_fail("cp_dir ԭ��Ŀ¼ Ŀ��Ŀ¼��\n");

        if(sscanf(arg,"%s %s",dira,dirb)!=2)
                return notify_fail("cp_dir ԭ��Ŀ¼ Ŀ��Ŀ¼��\n");

        if(file_size(dira)!=-2){
                write("û��"+dira+"���Ŀ¼!!!\n");
                return 1;
        }
        i=sizeof(dira);
        printf("dira=%s\n",dira);
        if(dira[i]=='/') dira=dira[0..i-1];
        printf("dira=%s\n",dira);

        if(TEMP_D->cp_dir(dira,dirb))
        {
                write(dira+"->"+dirb+" !!! ok.\n");
                log_file("static/CPDIR",sprintf("%s(%s)����%s��%s��%s��\n",
                        me->query("name"),me->query("id"),dira,dirb,ctime(time())));
        }
        else
        {
                write("������Ŀ¼ʧ����!!\n");
        }
        return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ : cp_dir <��������Ŀ¼> <Ŀ��Ŀ¼>

���ָ�������ȫ��������Ŀ¼�ĵ���,������Ŀ¼����Ŀ¼��ĵ���
Ŀ��Ŀ¼��Ϊԭ�������ڵ�Ŀ¼�Ļ��������Ƚ���, ϵͳ����㽨��
ex:
���뿽��/open/ping�������еĶ�����/backup/ping��,�Ҿ������ָ��Ϳ�����
cp_dir /open/ping /backup/ping

Ŀǰ��Ϊ���ڲ��Խ׶�,����
1.ֻ��admin����ʹ��
2.�����õ�ʱ��ῴ��һ���cp a->b��ѶϢ,Ŀ¼��Ļ��ͻ��ܺü�ҳ
  ���ܻ���Щ�����㲻��Ҳ���Գô˿����㵽��cp����Щ����
3.������ʹ�÷�����bug,Ҫ�Ͽ����˵�!!!
�ڴ��ر��лarthur����ʹ�õݻ�д���ָ��

                                           bss@2000/06/17
HELP
);
    return 1;
}
