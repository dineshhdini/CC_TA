pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                echo 'Building...'
                // Compiling the cpp file
                sh 'g++ -o main/hello_exec main/hello.cpp'
                // Building YOUR_SRN-1 job
                build 'PES1UG22CS189-1'
            }
        }
        
        stage('Test') {
            steps {
                echo 'Testing...'
                // Print output of the cpp file
                sh 'cd main && ./hello_exec'
            }
        }
        
        stage('Deploy') {
            steps {
                echo 'Deploying...'
                sh '''
                    echo "Deployment would happen here in a real environment"
                    echo "Application successfully deployed!"
                '''
            }
        }
    }
    
    post {
        success {
            echo 'Pipeline executed successfully!'
        }
        failure {
            echo 'Pipeline failed!'
        }
        always {
            echo 'Pipeline execution completed.'
        }
    }
}
