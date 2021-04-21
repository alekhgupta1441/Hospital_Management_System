

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('hospital', '0010_auto_20200523_1122'),
    ]

    operations = [
        migrations.AlterField(
            model_name='doctor',
            name='profile_pic',
            field=models.ImageField(blank=True, null=True, upload_to='DoctorProfilePic/'),
        ),
    ]
