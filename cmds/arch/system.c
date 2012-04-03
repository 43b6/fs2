// /mudinfo.c
 
inherit F_CLEAN_UP;
 
#define SCALE   (1.0/10.0)
#define STATUS  "ϵͳ�������д��"
 
string memory_expression(int m);
 
void create() { seteuid(getuid(this_object())); }
 
int main() {
        float value;
        mapping r;
 
        r = rusage();
        value = SCALE * (r["utime"] + r["stime"]) / uptime();
 
        write("        .__________ ϵ ͳ �� Ѷ __________.\n");
        write("����������������������������������������������������\n");
//      write(" Mud ��ʶ�����ƣ�  " + mud_name() + ".\n");
//      write(" Mud ����·���֣�  " + intermud_mud_name() + ".\n");
//      write(" ����վ��ҵƽ̨��  " + arch() + " \n");
        printf(" CPU ʹ�ðٷֱȣ�  %f %% ����� Mud ʹ����.\n", value );
        write(" CPU �ĸ���״����  " + query_load_average() + ".\n");
        printf(" ��ʹ�õļ����壺  %s bytes.\n", memory_expression(memory_info()
) );
        write(" ����ʹ����������  " + sizeof( users() ) + "  ����������.\n");
        write(" ��������������  " + sizeof( objects() ) + " �����.\n");
        write(" ����ִ�е�ʱ�䣺  " + CHINESE_D->chinese_period(uptime()) + "\n"
);
        write(" Mud ���ڵ�״̬��  " + STATUS + ".\n");
        return 1;
}
 
string memory_expression(int m)
{
        float mem;
 
        mem = m;
        if( mem<1024 ) return m + "";
        if( mem<1024*1024 )
                return sprintf("%.2f K", (float)mem / 1024);
        return sprintf("%.3f M", (float)mem / (1024*1024));
}
 
int help() {
 
   write(@HELP
ָ���ʽ��mudinfo
 
���ָ�����ʾ�й���� Mud ��һЩϵͳ��Ѷ��
 
HELP
        );
         return 1;
}
